	AREA ADDITION , CODE , READONLY

ENTRY 
START
	MOV R5 , #6
	MOV R0 , #0
	LDR R1 , =VALUE1
	
LOOP
	LDRH R3,[R1],#02
	ADD R0,R0,R3
	SUBS R5,R5,#1
	CMP R5,#0
	BNE LOOP
	LDR R4,=RESULT
	STR R0,[R4]
JMP B JMP 

VALUE1 DCW 0X1111 , 0X2222 , 0X3333 , 0XAAAA , 0XBBBB , 0XCCCC ;

	AREA DATA2 , DATA , READWRITE
RESULT DCD 0X0	
	END
		