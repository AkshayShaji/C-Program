#include <stdio.h>
struct process{
    int wt;
    int bt;
    int pct;
    int cbt;
};
int main()
{
    int n,t,i,j,ct=0,count,twt,ttat,tat[20];
    struct process p[20];
    printf("Enter the number of process: ");
    scanf("%d",&n);
    printf("Enter the time quanta: ");
    scanf("%d",&t);
    printf("Enter the burst time: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i].bt);
        p[i].cbt=p[i].bt;
        p[i].pct=0;
        p[i].wt=0;
    }
    i=0;
    count=0;
    while(1)
    {
        if(p[i].bt==0)
        {
            i=(i+1)%n;
        }
        if(p[i].bt>t)
        {
            p[i].bt=p[i].bt-t;
            p[i].wt=p[i].wt+(ct-p[i].pct);
            ct=ct+t;
            p[i].pct=ct;
            i=(i+1)%n;
        }
        else
        {
            p[i].bt=0;
            p[i].wt=p[i].wt+(ct-p[i].pct);
            ct=ct+p[i].bt;
            p[i].pct=ct;
            count++;
            i=(i+1)%n;
        }
        if(count==n)
        {
            break;
        }
    }
    twt=0;
    ttat=0;
    for(i=0;i<n;i++)
    {
        tat[i]=p[i].wt+p[i].bt;
        twt=twt+p[i].wt;
        ttat=ttat+tat[i];
    }
    printf("Average turn aroun time is %.2f\n",(float)ttat/n);
    printf("Average waiting time is %.2f\n",(float)twt/n);
    return 0;
}
