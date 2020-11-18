//2020年11月18日课后练习
#include<stdio.h>
void main()
{
    int x;
    printf("请输入您的工资:\n");
    scanf("%d",&x);
    if(x<0)
        printf("你还有花呗没还，无法使用该程序");
    else if(x>=0&&x<=500)
        printf("赤贫");
    else if(x>500&&x<=1500)
        printf("贫困");
    else if(x>1500&&x<=3000)
    printf("普通打工人");
    else if(x>3000&&x<=5000)
        printf("普通清洁工");
    else if(x>5000&&x<=12000)
        printf("水电工工资");
    else if(x>12000&&x<=50000)
        printf("脑袋大脖子粗不是老板就是伙夫");
    else
    printf("程序员");
}
