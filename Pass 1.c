#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() 
{
char label[10],opcode[10],operand[10],code[10]; 
int locctr,length,start; 
FILE *fp1,*fp2,*fp3,*fp4; 
Fp1=fopen("Input.txt","r") ; 
fp2=fopen("Symtab.txt","w" ) ; 
fp3=fopen("Out.txt ","w") ; 
fp4=fopen("Optab.txt","r"); 
fscanf(fp1,"%s%s%s",label,opcode,operand); 
if(strcmp(opcode,"START")==0)
{
start=atoi(operand); 
locctr=start; 
fprintf(fp3,"%s\t%s\t%s\n, label,opcode,operand); 
fscanf(fp1,"%s%s%s",label,opcode,operand); 
}
else
{
locctr=ø;
} 
while(strcmp(opcode, "END")!=0)
{
fprintf(fp3 ,"%d\t",locctr); 
if(strcmp(label,"**")!=0)
{ 
fprintf(fp2,"%s\t%d\n",label,locctr);
} 
rewind(fp4) ; 
while(strcmp(code,"END")!=0)
{ 
if(strcmp(opcode, code)==0)
{ 
locctr+=3; 
break;
} 
fscanf(fp4,"%s",code); 
}
if(strcmp(opcode,"WORD")==0)
{ 
locctr+=3;
} 
else if(strcmp(opcode,"RESW)==0)
{ 
locctr+=3*atoi(operand);
} 
else if(strcmp(opcode,"RESB)==0)
{
locctr+=atoi(operand);
} 
else if(strcmp(opcode,"BYTE")==0)
{ 
locctr+=strlen(operand)-3;
} 
fprintf(fp3,"%s\t%s\t%s\n",label,opcode,operand); 
fscanf(fp1,"%s%s%s",label,opcode,operand);
} 
fprintf(fp3,"%s\t%s\t%s\n,label,opcode,operand); 
length=locctr-start; 
printf("The length of the program:  %d\n",length); 
fclose(fp1); 
fcIose(fp2); 
fclose(fp3); 
fclose(fp4); 
return 0;
} 

        
        
Input.txt
        
**    START 2000
**    LDA   FIVE
**    STA   ALPHA
**    LDCH  CHARZ
**    STCH  C1
ALPHA RESW  1
FIVE  WORD  5  
CHARZ BYTE  C'Z'
C1    RESB  1
**    END   **
        
        
        
        
Optab.txt
        
START
LDA
STA
LDCH
STCH
END
