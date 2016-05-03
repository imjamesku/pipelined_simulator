#include "ControlSignalsGenerator.h"

ControlSignalsGenerator::ControlSignalsGenerator()
{
    //ctor
}

ControlSignalsGenerator::~ControlSignalsGenerator()
{
    //dtor
}

int ControlSignalsGenerator::genMemtoReg(Decoder *instruction){
    if(instruction->instructionName == "lw"){
        return 1;
    }
    else if(instruction->instructionName == "lh"){
        return 1;
    }
    else if(instruction->instructionName == "lhu"){
        return 1;
    }
    else if(instruction->instructionName == "lb"){
        return 1;
    }
    else if(instruction->instructionName == "lbu"){
        return 1;
    }
    return 0;
}


int ControlSignalsGenerator::genRegWrite(Decoder* instruction){
    if(instruction->instruction == 0)
        return 0;
    else if(instruction->instructionName == "jr")
        return 0;
    else if(instruction->instructionName == "sw")
        return 0;
    else if(instruction->instructionName == "sh")
        return 0;
    else if(instruction->instructionName == "sb")
        return 0;
    else if(instruction->instructionName == "beq")
        return 0;
    else if(instruction->instructionName == "bne")
        return 0;
    else if(instruction->instructionName == "bgtz")
        return 0;
    else if(instruction->instructionName == "j")
        return 0;
    else if(instruction->instructionName == "jal")
        return 0;
    else if(instruction->instructionName == "halt")
        return 0;
    return 1;
}
int ControlSignalsGenerator::genMemRead(Decoder *instruction){
    if(instruction->instructionName == "lw")
        return 1;
    else if(instruction->instructionName == "lh")
        return 1;
    else if(instruction->instructionName == "lhu")
        return 1;
    else if(instruction->instructionName == "lb")
        return 1;
    else if(instruction->instructionName == "lbu")
        return 1;
    return 0;

}
int ControlSignalsGenerator::genMemWrite(Decoder* instruction){
    if(instruction->instructionName == "sw")
        return 1;
    else if(instruction->instructionName == "sh")
        return 1;
    else if(instruction->instructionName == "sb")
        return 1;
    return 0;
}
int ControlSignalsGenerator::genRegDst(Decoder* instruction){
    if(instruction->instructionType == R)
        return 1;
    return 0;
}

