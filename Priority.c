#include <stdio.h> 
struct process 
{
int p;
int bt;
}ps[20];
int main() 
{
int i,j,n,temp,tempbt,wt[20],bt[20],tat[20],ttat,twt; 
float a,b; 
printf("Enter the number of processes: "); 
scanf("%d",&n); 
printf("Enter the priority of processes: ");
for(i=0;i<n;i++)
{ 
scanf( "%d",&ps[i].p); 
}
printf("Enter the burst time of processes: "); 
for(i=0;i<n;i++)
{
scanf("%d",&ps[i].bt); 
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(ps[j].p>ps[j+1].p) 
{
tempbt=ps[j].bt; 
ps[j].bt=ps[j+1].bt; 
ps[j+1].bt=tempbt; 
temp=ps[j].p; 
ps[j].p=ps[j+1].p; 
ps[j+1].p=temp; 
}
}
} 
wt[0]=0; 
for(i=1;i<n;i++)
{
wt[i]=wt[i]+ps[i].bt;
}
twt=0;
ttat=0;
for(i=0;i<n;i++)
{
tat[i]=wt[i]+ps[i].bt;
twt=twt+wt[i];
ttat=ttat+tat[i];
}
a=twt/n; 
b=ttat/n; 
printf("Average waiting time is %.2f",a);
printf("Average turn around time is %.2f,b);
return 0;
}
