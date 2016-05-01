#ifndef OPERATIONFUNCTION_H
#define OPERATIONFUNCTION_H
#include "ProgramCounter.h"


class OperationFunction
{
    public:
        OperationFunction();
        virtual ~OperationFunction();

        //R-type ins
        unsigned int add(unsigned int rs, unsigned int rt);
        unsigned int sub(unsigned int rs, unsigned int rt);
        unsigned int andFun(unsigned int rs, unsigned int rt);
        unsigned int orFun(unsigned int rs, unsigned int rt);
        unsigned int xorFun(unsigned int rs, unsigned int rt);
        unsigned int nor(unsigned int rs, unsigned int rt);
        unsigned int nand(unsigned int rs, unsigned int rt);
        unsigned int slt(unsigned int rs, unsigned int rt);
        unsigned int sll(unsigned int rt, unsigned char shamt);
        unsigned int srl(unsigned int rt, unsigned char shamt);
        unsigned int sra(unsigned int rt, unsigned char shamt);
     //   void jr(unsigned int rs, ProgramCounter *programCounter);
        // I-type ins
       // void addi(unsigned char rs, unsigned char rt, unsigned int immediate);
       // void addiu(unsigned char rs, unsigned char rt, unsigned int immediate);
      //  void lw(unsigned char rs , unsigned int immediate, Memory *dMemory);
       // void lh(unsigned char rs, unsigned int immediate, Memory *dMemory);
      //  void lhu(unsigned char rs, unsigned int immediate, Memory *dMemory);
       // void lb(unsigned char rs, unsigned int immediate, Memory *dMemory);
      //  void lbu(unsigned char rs, unsigned char rt, unsigned int immediate, Memory *dMemory);
      //  void sw(unsigned char rs, unsigned char rt, unsigned int immediate, Memory *dMemory);
      //  void sh(unsigned char rs, unsigned char rt, unsigned int immediate, Memory *dMemory);
    //    void sb(unsigned char rs, unsigned char rt, unsigned int immediate, Memory *dMemory);
        unsigned int lui(unsigned int immediate);
       // void andi(unsigned char rs, unsigned char rt, unsigned int immediate);
      //  void ori(unsigned char rs, unsigned char rt, unsigned int immediate);
       // void nori(unsigned char rs, unsigned char rt, unsigned int immediate);
    //    void slti(unsigned char rs, unsigned char rt, unsigned int immediate);
     //   void beq(unsigned char rs, unsigned char rt, unsigned int immediate, ProgramCounter *pc);
      //  void bne(unsigned char rs, unsigned char rt, unsigned int immediate, ProgramCounter *pc);
    //    void bgtz(unsigned char rs, unsigned int immediate, ProgramCounter *pc);
        //J-type ins
    //    void jump(unsigned int address, ProgramCounter *pc);
    //    void jal(unsigned int address, ProgramCounter *pc);
        //S-type ins
     //   void halt();
    protected:
    private:
};

#endif // OPERATIONFUNCTION_H
