#include<stdio.h>
void main()
{
    int i=1,j,k,m=5;
    printf("请问您想从1加到多少呢?\n");
    printf("请输入：");
    while(1)
    {
        scanf("%d",&j);
        k=(i+j)*(j)/2;
        m--;
        if(j<0)
        {
            printf("输入有误，请重新输入！");
            break;
        }
        else
        {
            if(m>0)
            {
                printf("计算从1加到%d\n",j);
                printf("求和后的值:%d",k);
                printf("\n您还有%d次操作改程序的机会\n",m);
                printf("请再次输入:");
            }
            else
            {
                printf("计算从1加到%d\n",j);
                printf("求和后的值:%d",k);
                printf("\n您操作本次程序的机会用光了哦");;
                break;
            }
        }
    }
}

