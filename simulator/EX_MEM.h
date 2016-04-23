#ifndef EX_MEM_H
#define EX_MEM_H


class EX_MEM
{
    public:
        EX_MEM();
        virtual ~EX_MEM();
        //control signals
            //MEM control signals
        int branch;
        int memRead;
        int memWrite;
            //WB control signals
        int regWrite;
        int writeMemToReg;

    protected:
    private:
};

#endif // EX_MEM_H
