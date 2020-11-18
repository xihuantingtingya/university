#include<stdio.h>
void main()
{
    int x,y;
    printf("请输入一个数:");
    scanf("%d",&x);
    if(x<1)
        y=x;
    else if(x>=1&&x<10)
        y=2*x-1;
    else
        y=3*x-11;
        printf("y=%d",y);

}
