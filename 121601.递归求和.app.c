#include<stdio.h>
int myFunaction(int x)
{
    if(x<=0)
    {
        return 0;
    }
    return x+myFunaction(x-1);
}
void main()
{
    int i,j=5;
    printf("请输入您想的数字：");
    while(1)
    {
    j--;
    if(j>=0)
    {
        scanf("%d",&i);
        printf("递归后：%d\n",myFunaction(i));
        printf("您还有%d次操作机会\n",j);
        printf("请继续：");
    }
    else
    {
        printf("您的操作机会用光啦，请充值！");
        break;
    }
    }
}
