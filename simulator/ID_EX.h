#ifndef ID_EX_H
#define ID_EX_H


class ID_EX
{
    public:
        ID_EX();
        virtual ~ID_EX();
        //data
        unsigned int newPC;
        unsigned int readReg1;
        unsigned int readReg2;
      //  unsigned int immediate;
      //  unsigned char rt;
      //  unsigned char rd;
        //control
            //WB control signals
        int writeMemToReg;
        int regWrite;
            //MEM control signals
       // int branch;
        int memRead;
        int memWrite;
            //EX control signals
        int regDest;

    protected:
    private:
};

#endif // ID_EX_H
