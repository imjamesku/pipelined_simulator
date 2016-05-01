#include "OperationFunction.h"

OperationFunction::OperationFunction()
{
    //ctor
}

OperationFunction::~OperationFunction()
{
    //dtor
}
unsigned int OperationFunction::add(unsigned int rs, unsigned int rt){
    return rs + rt;
}
unsigned int OperationFunction::sub(unsigned int rs, unsigned int rt){
    return rs + ~rt + 1;
}
unsigned int OperationFunction::andFun(unsigned int rs, unsigned int rt){
    return rs & rt;
}
unsigned int OperationFunction::orFun(unsigned int rs, unsigned int rt){
    return rs | rt;
}
unsigned int OperationFunction::xorFun(unsigned int rs, unsigned int rt){
    return rs ^ rt;
}
unsigned int OperationFunction::nor(unsigned int rs, unsigned int rt){
    return ~(rs | rt);
}
unsigned int OperationFunction::nand(unsigned int rs, unsigned int rt){
    return ~(rs & rt);
}
unsigned int OperationFunction::slt(unsigned int rs, unsigned int rt){
    int ts = (int)rs;
    int tt = (int)rt;
    return ts < tt;
}
unsigned int OperationFunction::sll(unsigned int rt, unsigned char shamt){
    return rt << shamt;
}
unsigned int OperationFunction::srl(unsigned int rt, unsigned char shamt){
    return rt >> shamt;
}
unsigned int OperationFunction::sra(unsigned int rt, unsigned char shamt){
    int t = (int)rt;
    return t >> shamt;
}
unsigned int OperationFunction::lui(unsigned int immediate){
    return immediate << 16;
}
