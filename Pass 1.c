#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
int main() 
{
char s[100] ,lab[30],opcode[30],opa[30],opcode1[30],opa1[30];
int locctr, x=0; 
FILE *fp1, *fp2, *fp3, *fp4; 
fp1=fopen( "input.txt ","r"); 
fp2=fopen("symtab.txt","w"); 
fp3=fopen( "out .txt ","w"); 
fp4=fopen( "optab. txt" ,"r"); 
while(fscanf(fp1,"%s%s%s ",lab,opcode,opa)!=EOF) 
{
if(strcmp(lab,''*")==0) 
{
if(strcmp(opcode,"START")) 
{
fprintf (fp3 ,"%s\t%s\t%s\n,lab,opcode,opa); 
Locctr=(atoi(opa)); 
else 
{
rewind (fp2); 
x=0;
while(fscanf(fp2,"%s%s",opcode1, opa1)!=EOF) 
{
if ( strcmp(opcode,opcode1)==0)
{ 
x=1;
}
}
If(x==1)
{ 
fprintf (fp3,"\n%d\t%s\t%s\t%s\n",locctr,lab,opcode,opa); 
locctr=locctr+3;
}
}
}
else 
{
if(strcmp(opcode,"RESW")==0)
{ 
fprintf (fp3,"\n%d\t%s\t%s\t%s\n",locctr,lab,opcode,opa); 
fprintf(fp4,"\n%d\t%s\n",locctr,lab); 
locctr=locctr+3; 
}
else if(strcmp(opcode,"WORD")==0)
{ 
fprintf (fp3,"\n%d\t%s\t%s\t%s\n",locctr,lab,opcode,opa); 
fprintf(fp4,"\n%d\t%s\n",locctr,lab); 
}
else if(strcmp(opcode,"BYTE")==0)
fprintf (fp3,\n%d\t%s\t%s\t%s\n",locctr,lab,opcode,opa); 
fprintf(fp4,"\n%d\t%s\n",locctr,lab); 
}
else 
{
fprintf(fp3 , "\n%d\t%s\t%s\t%s\n",locctr,lab,opcode,opa); 
fprintf(fp4,"\n%d\t%s\n, locctr, lab); 
}
locctr=locctr+(atoi(opa)); 
}
}
}
return 0;
}

        
       Input: 
        input.txt
        
      ** START 2000 
      ** LDA   FIVE
      ** STA   ALPHA 
      ** LDCH  CHARZ
      ** STCH  C1
      ALPHA    RESW 
      FIVE     WORD 5
      CHARZ    BYTE C'Z' 
      C1       RESB 1 
      **       END  **

        
        
        
        
        
        
        
        optab.txt
        
        START * 
        LDA   03 
        STA   0F
        LDCH  53 
        STCH  57
        END 
