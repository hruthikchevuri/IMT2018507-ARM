   AREA     even, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		LDR R0,=0x0A;      size of array is 10
		LDR R11,=0x20000000;
		LDR R12,=0x0;      count variable
		
		LDR R1,=0x9;       Array elementts
		LDR R2,=0x8;
		LDR R3,=0x7;
		LDR R4,=0x6;
		LDR R5,=0x5;
		LDR R6,=0x4;
		LDR R7,=0x3;
		LDR R8,=0x2;
		LDR R9,=0x1;
		LDR R10,=0x9;
		STMIA R11,{R1-R10}; Storing to memory location starting from 0x20000000
		
L1      LDR R5,[R11]
        
		SUB R0,#0x01;
		ADD R11,#0x04;
        TST R5,0x00000001
		IT EQ
		ADDEQ R12,#0x1;

		CMP R0,#00
		BNE L1
		
		MOV R0,R12;
		BL printMsg;    printing the count of even numbers at the end(4 even elements in the given array)
									
		
stop    B stop ; stop program
	ENDFUNC
	END 
		