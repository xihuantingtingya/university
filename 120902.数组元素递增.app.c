#include<stdio.h>
#include<windows.h>
void main()
{
    int i,j,n=0;
    int a[19][20]={{00,00,00,00,00,00,00,00,00,00}};
    for(i=0;i<19;i++)
    {
        for(j=0;j<20;j++)
        {
            a[19][20]=00;
            printf("%03d ",a[19][20]);
        }
        printf("\n");
    }
printf("A few seconds later:\n");
Sleep(5000);
for(i=0;i<19;i++)
    {
        for(j=0;j<20;j++)
        {
            n++;
            a[19][20]=n;
            printf("%03d ",a[19][20]);
        }
        printf("\n");
    }
}
