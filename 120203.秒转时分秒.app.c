#include<stdio.h>
void main()
{
    int x,a,b,c;
    printf("请输入一个秒钟数:");
    scanf("%d",&x);
    if(x>=0&&x<86400)
    {
        a=x/3600;       // 求小时
        b=(x%3600)/60;  //求分钟
        c=x-3600*a-60*b;//求秒
        printf("%d时：%d分：%d秒",a,b,c);
    }
    else
    {
        printf("报错!");
    }
}
