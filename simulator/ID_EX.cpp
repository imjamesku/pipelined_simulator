#include "ID_EX.h"

ID_EX::ID_EX()
{
    //ctor
    //data
        newPC = 0;
        readReg1 = 0;
        readReg2 = 0;
       // immediate = 0;
       // rt = 0;
       // rd = 0;
        //control
            //WB control signals
        writeMemToReg = 0;
        regWrite = 0;
            //MEM control signals
//        branch = 0;
        memRead = 0;
        memWrite = 0;
            //EX control signals
        regDest = 0;
}
void setToZero(){
        newPC = 0;
        readReg1 = 0;
        readReg2 = 0;
       // immediate = 0;
       // rt = 0;
       // rd = 0;
        //control
            //WB control signals
        writeMemToReg = 0;
        regWrite = 0;
            //MEM control signals
//        branch = 0;
        memRead = 0;
        memWrite = 0;
            //EX control signals
        regDest = 0;
}

ID_EX::~ID_EX()
{
    //dtor
}
