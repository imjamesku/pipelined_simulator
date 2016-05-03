#include "Decoder.h"

Decoder::Decoder(){
    op = 0;
    rs = 0;
    rt = 0;
    rd = 0;
    shamt = 0;
    funct = 0;
    immediate = 0;
    address = 0;
    instruction = 0;
    instructionName = "sll";
    type instructionType = R;
    readRs = 0;
    readRt = 0;
}
Decoder::Decoder(unsigned char *instruction)
{
    op = 0;
    instructionType = R;
    rs = 0;
    rt = 0;
    rd = 0;
    shamt = 0;
    funct = 0;
    immediate = 0;
    address = 0;
    this->instruction = (instruction[0]<<24) | (instruction[1]<<16) | (instruction[2]<<8) | instruction[3];
    op = (instruction[0] >> 2);
    if(op == 0){
        instructionType = R;

        funct = instruction[3] & 63;
        switch (funct){
            case 32:
                instructionName = "add";
                readRs = 1;
                readRt = 1;
                break;
            case 33:
                instructionName = "addu";
                readRs = 1;
                readRt = 1;
                break;
            case 34:
                instructionName = "sub";
                readRs = 1;
                readRt = 1;
                break;
            case 36:
                instructionName = "and";
                readRs = 1;
                readRt = 1;
                break;
            case 37:
                instructionName = "or";
                readRs = 1;
                readRt = 1;
                break;
            case 38:
                instructionName = "xor";
                readRs = 1;
                readRt = 1;
                break;
            case 39:
                instructionName = "nor";
                readRs = 1;
                readRt = 1;
                break;
            case 40:
                instructionName = "nand";
                readRs = 1;
                readRt = 1;
                break;
            case 42:
                instructionName = "slt";
                readRs = 1;
                readRt = 1;
                break;
            case 0:
                instructionName = "sll";
                readRs = 0;
                readRt = 1;
                break;
            case 2:
                instructionName = "srl";
                readRs = 0;
                readRt = 1;
                break;
            case 3:
                instructionName = "sra";
                readRs = 0;
                readRt = 1;
                break;
            case 8:
                instructionName = "jr";
                readRs = 1;
                readRt = 0;
                break;
        }
        if(funct != 0 && funct != 2 && funct != 3)
            rs = ((instruction[0] & 3)<<3) + (instruction[1]>>5);
        if(funct != 8){
            rt = instruction[1] & 31;
            rd = instruction[2] >>3;
        }
        if(funct == 0 || funct == 2 || funct == 3)
            shamt = (instruction[2] & 7) << 2 | (instruction[3] >> 6);


    }
    else if(op == 2){
        instructionType = J;
        instructionName = "j";
        address = instruction[3] | (instruction[2] << 8) | (instruction[1] << 16) | ((instruction[0] & 3) << 24);
        readRs = 0;
        readRt = 0;
    }
    else if(op == 3){
        instructionType = J;
        instructionName = "jal";
        address = instruction[3] | (instruction[2] << 8) | (instruction[1] << 16) | ((instruction[0] & 3) << 24);
        readRs = 0;
        readRt = 0;
    }
    else if(op == 63){
        instructionType = S;
        instructionName = "halt";
        readRs = 0;
        readRt = 0;
    }
    else{
        instructionType = I;
        rs = ((instruction[0] & 3) << 3) + (instruction[1] >> 5);
        rt = instruction[1] & 31;
        /*char temp2 = instruction[2];
        char temp3 = instruction[3];
        immediate = (temp2 << 8) + temp3;*/
       immediate = ((char)instruction[2] << 8) | instruction[3]; //sign-bit只看前面
       //immediate = (instruction[2] << 8) + (instruction[3]);//減查括號
        switch(op){
        case 8:
            instructionName = "addi";
            readRs = 1;
            readRt = 0;
            break;
        case 9:
            instructionName = "addiu";
            //immediate = (instruction[2] << 8) + (instruction[3]);
            readRs = 1;
            readRt = 0;
            break;
        case 35:
            instructionName = "lw";
            readRs = 1;
            readRt = 0;
            break;
        case 33:
            instructionName = "lh";
            break;
        case 37:
            instructionName = "lhu";
            readRs = 1;
            readRt = 0;
            break;
        case 32:
            instructionName = "lb";
            readRs = 1;
            readRt = 0;
            break;
        case 36:
            instructionName = "lbu";
            readRs = 1;
            readRt = 0;
            break;
        case 43:
            instructionName = "sw";
            readRs = 1;
            readRt = 1;
            break;
        case 41:
            instructionName = "sh";
            readRs = 1;
            readRt = 1;
            break;
        case 40:
            instructionName = "sb";
            readRs = 1;
            readRt = 1;
            break;
        case 15:
            instructionName = "lui";
            readRs = 0;
            readRt = 0;
            break;
        case 12:
            instructionName = "andi";
            immediate = (instruction[2] << 8) + (instruction[3]);
            readRs = 1;
            readRt = 0;
            break;
        case 13:
            instructionName = "ori";
            immediate = (instruction[2] << 8) + (instruction[3]);
            readRs = 1;
            readRt = 0;
            break;
        case 14:
            instructionName = "nori";
            immediate = (instruction[2] << 8) + (instruction[3]);
            readRs = 1;
            readRt = 0;
            break;
        case 10:
            instructionName = "slti";
            readRs = 1;
            readRt = 0;
            break;
        case 4:
            instructionName = "beq";
            readRs = 1;
            readRt = 1;
            break;
        case 5:
            instructionName = "bne";
            readRs = 1;
            readRt = 1;
            break;
        case 7:
            instructionName = "bgtz";
            readRs = 1;
            readRt = 0;
            break;
        }
    }
}
void Decoder::setToNop(){
    op = 0;
    rs = 0;
    rt = 0;
    rd = 0;
    shamt = 0;
    funct = 0;
    immediate = 0;
    address = 0;
    instruction = 0;
    instructionName = "sll";
    instructionType = R;
    readRs = 0;
    readRt = 0;
}

std::string Decoder::returnName(){
    if(this->instruction == 0)
        return "NOP";
    std::string uppercaseName = instructionName;
    for(int i=0; i<instructionName.length(); i++){
        uppercaseName.at(i) = toupper(instructionName.at(i));
    }
    return  uppercaseName;
}

Decoder::~Decoder()
{
    //dtor
}
