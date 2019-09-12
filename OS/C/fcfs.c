#include <stdio.h>
int main()
{
	printf("Enter the No. of process\n");
	int n,i,j,temp=0,burst=0;
	scanf("%d",&n);
	int arr_time[n], burst_time[n],wait_time[n];
	float average=0.0;
	for (i = 0; i < n; ++i)
	{
		printf("Enter the arrival time\n");
		scanf("%d",&arr_time[i]);
		printf("Enter the Burst time\n");
		scanf("%d",&burst_time[i]);
		for (j = i; j >0; j--)
		{
			if(arr_time[j]<arr_time[j-1])
			{
				temp=arr_time[j];
				arr_time[j]=arr_time[j-1];
				arr_time[j-1]=temp;
				temp=burst_time[j];
				burst_time[j]=burst_time[j-1];
				burst_time[j-1]=temp;
			}
		}
	}
    printf("Arrival time\n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n",arr_time[i]);
    }
    printf("Burst Time\n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n",burst_time[i]);
    }
	for (i = 0; i < n; ++i)
	{
		wait_time[i]=burst-arr_time[i];
		burst=burst+burst_time[i];
	}
	printf("Waiting Time\n");
	for (i = 0; i < n; ++i)
	{
		printf("%d\n",wait_time[i]);
		average=average+wait_time[i];
	}
	average=average/n;
	printf("Average Waiting Time: %f\n",average);
	return 0;
}