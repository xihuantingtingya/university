#include<stdio.h>
void main()
{
    int i,j;
    int arr[2][3]={
        {5,8,8},
        {5,2,0}};//遍历
        for(i=0;i<2;i++)
        {
            for(j=0;j<3;j++)
            printf("%d ",arr[i][j]);
            printf("\n");
        }
}
