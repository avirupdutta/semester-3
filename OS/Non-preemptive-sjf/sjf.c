#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int at[n], bt[n], st[n], wt[n];
    int i, j, temp;
    float avwt = 0.0;
    for (i = 0; i < n; i++)
    {
        printf("For process number %d\n", i + 1);
        printf("Enter the arrival time of the process:\n ");
        scanf("%d", &at[i]);
        printf("Enter the burst time of the process: \n");
        scanf("%d", &bt[i]);
        for (j = i; j > 1; j--)
        {
            if (bt[j] < bt[j - 1])
            {
                temp = bt[j];
                bt[j] = bt[j - 1];
                bt[j - 1] = temp;
                temp = at[j];
                at[j] = at[j - 1];
                at[j - 1] = temp;
            }
        }
    }
    st[0] = 0;
    for (i = 1; i < n; i++)
    {
        st[i] = st[i - 1] + bt[i - 1];
    }
    for (i = 0; i < n; i++)
    {
        wt[i] = st[i] - at[i];
        avwt = avwt + wt[i];
    }
    printf("\nProcesses \t\t Arrival Time \t\t Burst Time \t\t Service Time \t\t Waiting Time \n");
    for (i = 0; i < n; i++)
    {
        printf("\n P[%d] \t\t\t %d \t\t\t %d \t\t\t %d \t\t\t %d\n", i + 1, at[i], bt[i], st[i], wt[i]);
    }
    avwt = avwt / n;
    printf("\nThe average waiting time is %f\n", avwt);
}