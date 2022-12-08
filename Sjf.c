include <stdio.h> 
int main() 
{
int n,i,j,temp,bt[20],wt[20],tat[20],twt,ttat; 
float a,b; 
printf( "Enter the number of processes: "); 
scanf("%d",&n); 
printf("Enter the burst time of processes: "); 
for(i=0;i<n-l; i++) 
{
for(j=0;j<n-i-1;j++)
{
if(bt[j]>bt[j+1])
{
temp=bt[j];
bt[j]=bt[j+1]; 
bt[j+1]=temp;
}
}
}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
}
twt=0; 
ttat=0;
for(i=0;i<n;i++)
{
tat[i]=wt[i]+bt[i];
twt=wt[i]+twt;
ttat=ttat+tat[i]; 
}
a=twt/n; 
b=ttat/n; 
printf("Average waiting time is: %.2f\n",a); 
printf("Average turn around time is: %.2f\n",b); 
return 0;
}
