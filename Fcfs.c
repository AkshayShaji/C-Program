#include <stdio.h> 
int main() 
{
int n,i,bt[20],wt[20],tat[20],twt,ttat;
float a,b; 
printf("Enter the number of processes: "); 
scanf("%d",&n); 
printf( "Enter the burst time of processes: ");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
} 
wt[0]=0; 
For(i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
} 
twt=0; 
ttat=0;
for(i=0;i<n;i++)
{
tat[i]=wt[i]+bt[i];
twt=twt+wt[i];
ttat=ttat+tat[i];
} 
a=twt/n;
b=ttat/n;
printf("Average waiting time is %.2f",a);
printf("Average turn around time is %.2f",b);
return 0;
}
