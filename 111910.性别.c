#include<stdio.h>
void main()
{
    int x;
    printf("请输入1和0判断性别:");
    scanf("%d",&x);
    if(x==1)
        printf("男");
    else if(x==0)
        printf("女");
    else
        printf("输入有误,请重新输入!");
}
