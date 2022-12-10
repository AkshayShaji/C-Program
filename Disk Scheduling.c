#include <stdio.h> 
int main() 
{
int n,diff,tst=0,req[20],i; 
printf("Enter the number of request: "); 
scanf("%d",&n); 
printf( "Enter the current head position: "); 
scanf("%d",&req[0]); 
printf( "Enter the request: ");
for(i=1;i<=n;i++)
{ 
scanf("%d",&req[i]); 
if(req[i]<req[i-1])
{
diff=req[i-1]-req[i];
} 
else
{
diff=req[i]-req[i-1];
} 
tst=tst+diff ;
} 
printf("Total seek time is %d\n",tst); 
return 0; 
}
