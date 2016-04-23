#include "MEM_WB.h"

MEM_WB::MEM_WB()
{
    //ctor
        regWrite = 0;
        doWriteMemToReg = 0;
        dataFromMem = 0;
        dataFromAlu = 0;
        writeRegNum = 0;
}

MEM_WB::~MEM_WB()
{
    //dtor
}
