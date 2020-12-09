#include<stdio.h>
#include<windows.h>
void main()
{
    int i,j,n=91;
    int a[9][10]={{00,00,00,00,00,00,00,00,00,00}};
    for(i=0;i<9;i++)
    {
        for(j=0;j<10;j++)
        {
            a[9][10]=00;
            printf("%02d ",a[9][10]);
        }
        printf("\n");
    }
printf("A few seconds later:\n");
Sleep(5000);
for(i=0;i<9;i++)
    {
        for(j=0;j<10;j++)
        {
            n--;
            a[9][10]=n;
            printf("%02d ",a[9][10]);
        }
        printf("\n");
    }
}
