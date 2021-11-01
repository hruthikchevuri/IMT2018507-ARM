   AREA     fib, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
     ENTRY 
__main  FUNCTION
		MOV R0,#0x0;
		BL printMsg;   
		MOV R0,#0x01;
		BL printMsg;     Manually generated first 2 numbers in the series
		
		MOV R8,#0x00;
		MOV R9,#0x01;
		MOV R10,#0x8;    No.of values in the series to be printed after 0,1
		
L1      ADD R3,R8,R9;
        MOV R0,R3
		BL printMsg;      Printing values of fibanocci series in hex format
		MOV R8,R9;
		MOV R9,R3;
		
		SUB R10,#0x01;
        CMP R10,#0x00;   Iterate for 8 more elements after fitrst 2 elements
		BNE L1
		
		
	    
									
		
stop    B stop ; stop program
	ENDFUNC
	END 
		