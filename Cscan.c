#include <stdio.h> 
int main() 
{
int sl,n,i,s,diff,tst=0,req[20]; 
printf( "Enter the size of the memory: "); 
scanf("%d",&s); 
printf( "Enter the number of request: ");
scanf("%d",&n); 
printf("Enter the current head position: "); 
scanf("%d",&req[0]); 
printf( "Enter the request: ");
for(i=1;i<=n;i++)
{
scanf("%d",&req[i]);
} 
int prediff=s; 
for(i=1;i<=n;i++)
{
if(req[i]<req[0])
{
diff=req[0]-req[i]; 
if (diff<prediff)
{ 
sl=req [i] ; 
prediff=diff ; 
}
}
}
tst=((s-1)-req[0])+(s-1)+sl; 
printf("Total seek time is %d\n",tst); 
return 0;
}
