#ifndef CONTROLSIGNALSGENERATOR_H
#define CONTROLSIGNALSGENERATOR_H
#include <Decoder.h>

class ControlSignalsGenerator
{
    public:
        ControlSignalsGenerator();
        virtual ~ControlSignalsGenerator();
        int genRegDst(Decoder* instruction);
        //int genBranch(Decoder* instruction);
        int genMemRead(Decoder* instruction);
        int genMemWrite(Decoder* instruction);
        int genRegWrite(Decoder* instruction);
        int genMemtoReg(Decoder* instruction);
    protected:
    private:
};

#endif // CONTROLSIGNALSGENERATOR_H
