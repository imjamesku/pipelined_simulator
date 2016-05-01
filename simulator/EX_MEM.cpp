#include "EX_MEM.h"

EX_MEM::EX_MEM()
{
    //ctor
        aluResult = 0;
        readReg2 = 0;
        regDestIndex = 0;
        newPC = 0;
    //control signals
            //MEM control signals
//        branch = 0;
        memRead = 0;
        memWrite = 0;
            //WB control signals
        regWrite = 0;
        writeMemToReg = 0;
}

EX_MEM::~EX_MEM()
{
    //dtor
}
