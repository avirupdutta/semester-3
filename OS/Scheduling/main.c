#include <stdio.h>
#include <stdlib.h>

void nonp_fcfs()
{
    int n,i,j,pos,temp,total_wt = 0, total_tat = 0;
    printf("Enter number of process:");
    scanf("%d",&n);
    int at[n],bt[n],wt[n],tat[n],pid[n],st[n];
    for(i=0;i<n;i++)
    {
        pid[i]=i;
        printf("\nP[%d]:",pid[i]);
        printf("\nEnter Process Arrival Time: ");
        scanf("%d",&at[i]);
        printf("\nEnter Process Burst Time: ");
        scanf("%d",&bt[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(at[pos]>at[j])
            {
                pos=j;
            }
            if(pos!=i)
            {
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;
                temp=pid[i];
                pid[i]=pid[j];
                pid[j]=temp;
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }
        }
    }
    wt[0] = 0;
    st[0]=0;
    for(i=1;i<n;i++)
    {
        st[i]=st[i-1]+bt[i-1];
        wt[i]=st[i]-at[i];
        if (wt[i] < 0)
        {
            wt[i] = 0;
        }
    }
    for(i=0;i<n;i++)
    {
        tat[i] = bt[i] + wt[i];
    }
    printf("Pid\tAT\tBT\tWT\tTAT\n");
    for (i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],wt[i],tat[i]);
    }
    float avgwt= (float)total_wt/(float)n;
    float avgtat= (float)total_tat/ (float)n;
    printf("\nAverage waiting time = %f",avgwt);
    printf("\nAverage turn around time = %f",avgtat);
}

void nonp_sjf()
{
    int n,i,j,pos,temp,total_wt = 0,total_tat = 0,min,k=1,btime=0,wsum=0,tsum=0;
    printf("Enter number of process:");
    scanf("%d",&n);
    int at[n],bt[n],wt[n],tat[n],pid[n];
    for(i=0;i<n;i++)
    {
        pid[i]=i;
        printf("\nP[%d]:",pid[i]);
        printf("\nEnter Process Arrival Time: ");
        scanf("%d",&at[i]);
        printf("\nEnter Process Burst Time: ");
        scanf("%d",&bt[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(at[pos]>at[j])
            {
                pos=j;
            }
            if(pos!=i)
            {
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;
                temp=pid[i];
                pid[i]=pid[j];
                pid[j]=temp;
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        btime=btime+bt[j];
        min=bt[k];
        for(i=k;i<n;i++)
        {
            if(btime>=at[i] && bt[i]<min)
            {
                temp=at[k];
                at[k]=at[i];
                at[i]=temp;
                temp=pid[k];
                pid[k]=pid[i];
                pid[i]=temp;
                temp=bt[k];
                bt[k]=bt[i];
                bt[i]=temp;
            }
        }
        k++;
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wsum=wsum+bt[i-1];
        wt[i]= wsum-at[i];
        total_wt=total_wt+wt[i];
    }
    for(i=0;i<n;i++)
    {
        tsum=tsum+bt[i];
        tat[i]=tsum-at[i];
        total_tat=total_tat+tat[i];
    }
    printf("Pid\tAT\tBT\tWT\tTAT\n");
    for (i=0; i<n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],wt[i],tat[i]);
    }
    float avgwt= (float)total_wt/(float)n;
    float avgtat= (float)total_tat/ (float)n;
    printf("\nAverage waiting time = %f",avgwt);
    printf("\nAverage turn around time = %f",avgtat);
}

void nonp_prio()
{
    int n,i,j,pos,temp,wsum=0,tsum=0;
    printf("Enter number of process:");
    scanf("%d",&n);
    int at[n],bt[n],pt[n],wt[n],tat[n],pid[n],ct[n];
    for(i=1;i<=n;i++)
    {
        pid[i]=i;
        printf("\nP[%d]:",pid[i]);
        printf("\nEnter Process Arrival Time: ");
        scanf("%d",&at[i]);
        printf("\nEnter Process Burst Time: ");
        scanf("%d",&bt[i]);
        printf("\nEnter Process Priority (smaller numbers denote higher priority): ");
        scanf("%d",&pt[i]);
    }
    ct[0]=0;
    if(bt[1]>=at[n])
    {
        ct[1]=bt[1]+at[1];
        tat[1]=ct[1]-at[1];
        wt[1]=tat[1]-bt[1];
        wsum=wt[1];
        tsum=tat[1];
        for(i=2;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(pt[j]<pt[i])
                {
                    temp=pt[i];
                    pt[i]=pt[j];
                    pt[j]=temp;
                    temp=bt[i];
                    bt[i]=bt[j];
                    bt[j]=temp;
                    temp=at[i];
                    at[i]=at[j];
                    at[j]=temp;
                    temp=pid[i];
                    pid[i]=pid[j];
                    pid[j]=temp;
                }
            }
            if(ct[i-1]<at[i])
            {
                temp=at[i]-ct[i-1];
                ct[i]=ct[i-1]+bt[i]+temp;
                temp=bt[i];
            }
            else
            {
                ct[i]=ct[i-1]+bt[i];
            }
            tat[i]=ct[i]-at[i];
            wt[i]=tat[i]-bt[i];
            wsum=wsum+wt[i]+wt[1];
            tsum=tsum+tat[i];
       }
    }
    if(at[n]==0)
    {
        ct[0]=0;
        for(i=1;i<=n;i++)
            {
                for(j=i+1;j<=n;j++)
                {
                    if(pt[j]<pt[i])
                    {
                        temp=pt[i];
                        pt[i]=pt[j];
                        pt[j]=temp;
                        temp=bt[i];
                        bt[i]=bt[j];
                        bt[j]=temp;
                        temp=at[i];
                        at[i]=at[j];
                        at[j]=temp;
                    }
                }
                if(ct[i-1]<at[i])
                {
                    temp=at[i]-ct[i-1];
                    ct[i]=ct[i-1]+bt[i]+temp;
                    temp=bt[i];
                }
                else
                {
                    ct[i]=ct[i-1]+bt[i];
                }
                tat[i]=ct[i]-at[i];
                wt[i]=tat[i]-bt[i];
                wsum=wsum+wt[i];
                tsum=tsum+tat[i];
            }
    }
    printf("Pid\tAT\tBT\tPT\tWT\tTAT\n");
    for (i=1; i<=n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",pid[i],at[i],bt[i],pt[i],wt[i],tat[i]);
    }
    float avgwt= (float)wsum/(float)n;
    float avgtat= (float)tsum/ (float)n;
    printf("\nAverage waiting time = %f",avgwt);
    printf("\nAverage turn around time = %f",avgtat);
}
void round_robin()
{
    int n,tq,i,j,pos,temp,time,cnt,flag=0,total_wt = 0,total_tat = 0;
    printf("Enter number of process:");
    scanf("%d",&n);
    int remain=n;
    printf("\nEnter the value of Time Quantum: ");
    scanf("%d",&tq);
    int at[n],bt[n],rt[n],pid[n];
    for(i=0;i<n;i++)
    {
        pid[i]=i;
        printf("\nP[%d]:",pid[i]);
        printf("\nEnter Process Arrival Time: ");
        scanf("%d",&at[i]);
        printf("\nEnter Process Burst Time: ");
        scanf("%d",&bt[i]);
        rt[i]=bt[i];
    }
    for(i=0;i<(n-1);i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(at[pos]>at[j])
            {
                pos=j;
            }
            if(pos!=i)
            {
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;
                temp=pid[i];
                pid[i]=pid[j];
                pid[j]=temp;
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
            }
        }
    }
    for(time=0,cnt=0;remain!=0;)
    {
        if(rt[cnt]<=tq && rt[cnt]>0)
        {
            time+=rt[cnt];
            rt[cnt]=0;
            flag=1;
        }
        else if(rt[cnt]>0)
        {
            rt[cnt]-=tq;
            time+=tq;
        }
        if(rt[cnt]==0 && flag==1)
        {
            remain--;
            total_wt+=time-at[cnt]-bt[cnt];
            total_tat+=time-at[cnt];
            flag=0;
        }
        if(cnt==n-1)
        {
            cnt=0;
        }
        else if(at[cnt+1]<=time)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
    }
    float avgwt= (float)total_wt/(float)n;
    float avgtat= (float)total_tat/ (float)n;
    printf("\nAverage waiting time = %f",avgwt);
    printf("\nAverage turn around time = %f",avgtat);
}
int main()
{
    //nonp_fcfs();
    //nonp_sjf();
    //nonp_prio();
    round_robin();
    return 0;
}
