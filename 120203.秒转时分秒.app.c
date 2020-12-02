#include<stdio.h>
void main()
{
    int x,a,b,c;
    printf("请输入一个秒钟数:");
    scanf("%d",&x);
    system("color F1");
    if(x>=0&&x<86400)
    {
        a=x/3600;       // 求小时
        b=(x%3600)/60;  //求分钟
        c=x-3600*a-60*b;//求秒
        printf("%02d时：%02d分：%02d秒\n",a,b,c);
    }
    else
    {
        printf("报错!");
    }
    system("pause");
}
