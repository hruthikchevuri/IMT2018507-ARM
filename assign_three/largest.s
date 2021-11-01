     AREA  largest, CODE, READONLY
     EXPORT __main
     IMPORT printMsg
	 
     ENTRY 
__main  FUNCTION
	
		MOV R0,#0x20000000;  
		LDR R8,=0x4;
		LDR R9,=0x7;
		LDR R10,=0x9;
		STMIA R0,{R8-R10};    Storing values taken above to the memory location from R0
		
		
		LDR R1,[R0,#0x00];    Loading values to the registers R1,R2,R3
		LDR R2,[R0,#0x04];
		LDR R3,[R0,#0x08];
		
		cmp R1,R2;            Comparing first 2 numbers
		ITE LT
		MOVLT R4,R2;
		MOVGE R4,R1;
		
		cmp R3,R4;            Comparing with the 3rd number
		ITE LT
		MOVLT R0,R4;
		MOVGE R0,R3;
		BL printMsg;           Printing the largest number in Printf viewer
				
stop B stop ;
    ENDFUNC
	END