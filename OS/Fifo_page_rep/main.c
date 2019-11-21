#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,nop,nof,k,avail,hcount=0,fcount=0;
    printf("ENTER THE NUMBER OF FRAMES :");
    scanf("%d",&nof);
    printf("\nENTER THE NUMBER OF PAGES: ");
    scanf("%d",&nop);
    int a[nop],frame[nof];
    printf("\nENTER THE REFERENCE STRING : ");
    for(i=0;i<nop;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<nof;i++)
    {
        frame[i]= -1;
    }
    j=0;
    printf("\nref string\t page frames\n");
    for(i=0;i<nop;i++)
    {
        printf("%d\t\t",a[i]);
        avail=0;
        for(k=0;k<nof;k++)
        {
            if(frame[k]==a[i])
            {
                avail=1;
                hcount++;
            }
        }
        if (avail==0)
        {
            frame[j]=a[i];
            j=(j+1)%nof;
            fcount++;
            for(k=0;k<nof;k++)
            {
                printf("%d\t",frame[k]);
            }
        }
        printf("\n");
    }
    printf("\nPage Fault: %d",fcount);
    printf("\nPage Hit: %d",hcount);
    printf("\nPage Fault ratio: %f",(((float)fcount/(float)nop)*100));
    printf("\nPage Hit ratio: %f",(((float)hcount/(float)nop)*100));
    return 0;
}
