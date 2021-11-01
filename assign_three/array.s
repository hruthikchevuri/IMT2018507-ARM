   AREA     arr, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		LDR R0,=0x0A;      size of array is 10
		LDR R11,=0x20000000;
		LDR R12,=0x0;      max variable
		
		LDR R1,=0x9;       Array elementts
		LDR R2,=0x8;
		LDR R3,=0x7;
		LDR R4,=0x6;
		LDR R5,=0xC;
		LDR R6,=0x4;
		LDR R7,=0xD;
		LDR R8,=0x2C;
		LDR R9,=0x1;
		LDR R10,=0x9;
		STMIA R11,{R1-R10}; Storing to memory location starting from 0x20000000
		
L1      LDR R5,[R11]
        
		SUB R0,#0x01;
		ADD R11,#0x04;
        CMP R5,R12
		IT GT
		MOVGT R12,R5;

		CMP R0,#00
		BNE L1
		
		MOV R0,R12;
		BL printMsg;    printing the count of even numbers at the end
									
		
stop    B stop ; stop program
	ENDFUNC
	END 
		