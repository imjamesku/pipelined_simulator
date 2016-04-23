#include "EX_MEM.h"

EX_MEM::EX_MEM()
{
    //ctor
    //control signals
            //MEM control signals
        branch = 0;
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
