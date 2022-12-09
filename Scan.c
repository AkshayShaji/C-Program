#include <stdio.h> 
int main() 
{
int n,s,i,diff,tst=0,req[20]; 
int small=req[1];
printf("Enter the size of memory: ");
scanf("%d",&s); 
printf("Enter the number of request: "); 
scanf("%d",&n); 
printf("Enter the current head position: "); 
scanf("%d",&req[0]); 
printf("Enter the request: ");
for(i=1;i<=n;i++)
{ 
scanf("%d",&req[i]);
}
for(i=2;i<=n;i++)
{
if(small>req[i])
{
small=req[i];
}
}
tst=((s -1)-req[0])+((s-1)-small); 
printf("Total seek time is %d\n",tst); 
return 0;
}
