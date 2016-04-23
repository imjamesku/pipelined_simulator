#ifndef MEM_WB_H
#define MEM_WB_H


class MEM_WB
{
    public:
        MEM_WB();
        virtual ~MEM_WB();
    protected:
    private:
        int regWrite;
        int doWriteMemToReg;//if==0 write ALU result to reg
        //data
        unsigned int dataFromMem;
        unsigned int dataFromAlu;
        unsigned char writeRegNum;
};

#endif // MEM_WB_H
