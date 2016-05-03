pipeline:main.o ControlUnit.o Decoder.o Memory.o ProgramCounter.o Register.o ControlSignalsGenerator.o IF_ID.o ID_EX.o EX_MEM.o MEM_WB.o OperationFunction.o 
	g++ -o pipeline main.o ControlUnit.o Decoder.o Memory.o ProgramCounter.o Register.o ControlSignalsGenerator.o IF_ID.o ID_EX.o EX_MEM.o MEM_WB.o OperationFunction.o
main.o:main.cpp ControlUnit.h Decoder.h Memory.h ProgramCounter.h MyRegister.h
	g++ main.cpp -c
ControlUnit.o:ControlUnit.cpp ControlUnit.h
	g++ ControlUnit.cpp -c
Decoder.o:Decoder.cpp Decoder.h
	g++ Decoder.cpp -c
Memory.o:Memory.cpp Memory.h
	g++ Memory.cpp -c
ProgramCounter.o:ProgramCounter.cpp ProgramCounter.h
	g++ ProgramCounter.cpp -c
Register.o:Register.cpp MyRegister.h
	g++ Register.cpp -c
ControlSignalsGenerator.o:ControlSignalsGenerator.cpp ControlSignalsGenerator.h
	g++ ControlSignalsGenerator.cpp -c
IF_ID.o:IF_ID.cpp IF_ID.h
	g++ IF_ID.cpp -c
ID_EX.o:ID_EX.cpp ID_EX.h
	g++ ID_EX.cpp -c
EX_MEM.o:EX_MEM.cpp EX_MEM.h
	g++ EX_MEM.cpp -c
MEM_WB.o:MEM_WB.cpp MEM_WB.h
	g++ MEM_WB.cpp -c
OperationFunction.o:OperationFunction.cpp OperationFunction.h
	g++ OperationFunction.cpp -c
clean:
	rm *.o