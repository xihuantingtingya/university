#include<stdio.h>
#include<windows.h>
void main()
{
    int i,j;
    int arr[20][10]={
        {999,999,999,999,999,999,999,999,999,999}
        };
        for(i=0;i<20;i++)
        {
            for(j=0;j<10;j++)
                {
            arr[i][j]=999;
            printf("%d ",arr[i][j]);
            system("color F1");
                }
            printf("\n");
        }
        printf("请稍等五秒:\n");
        Sleep(5000);
        for(i=0;i<20;i++)
        {
            for(j=0;j<10;j++)
                {
            arr[i][j]=000;
            printf("%03d ",arr[i][j]);
            system("color F4");
                }
            printf("\n");
        }
}


