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
        scanf("%d",&i);
        j--;
        if(j<0)
        {
            printf("您的机会用完了哦!");
        }
        else
        {
            if(j>0)
            {
                printf("递归后：%d\n",myFunaction(i));
                printf("您还有%d次操作机会\n",j);
                printf("请继续：");
            }
            else
            {
                printf("递归后：%d\n",myFunaction(i));
                printf("您的操作机会用光啦，请充值！");
                break;
            }
        }
    }
}
