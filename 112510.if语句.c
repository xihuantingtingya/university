#include<stdio.h>
void main()
{
    float x;
    printf("请输入您一个月的工资:");
    scanf("%f",&x);
    if(x>=0&&x<=100)
    {
        printf("贫困打工人");
    }
    else if(x>100&&x<=1000)
    {
        printf("一般打工人");
    }
    else if(x>1000&&x<=20000)
    {
        printf("土豪打工人");
    }
    else
    {
        printf("输入有误，请重新输入!");
    }
}
