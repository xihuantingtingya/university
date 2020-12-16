#include<stdio.h>
#include<string.h>
void main()
{
    printf("猜数字小游戏\n");
    printf("我们帅帅的C语言老师姓什么?\n");
    printf("您的答案:");
    int x,y=12,i=5;
    char m[]="";
    char n="曹";
    scanf("%s",&m);
    if(!strcmp(m,"曹"))
    {
        printf("请输入您心目中的数字,1到20以内哦:\n");
        printf("请输入:");
        while(1)
        {
        i--;
        scanf("%d",&x);
        system("color F1");
        if(i<=0)
        {
            printf("您的机会用光啦\n");
            printf("游戏结束了哦，憨憨");
            break;
        }
        else
        {
        if(x>20)
            {
                printf("说好了1到20以内，你咋不遵守规则呢？\n");
                printf("这下好了吧，游戏结束了");
                break;
            }
        else if(x>y&&x<20)
            {
                printf("您输入的值太大啦\n");
                printf("您还有%d次机会\n",i);
                printf("请您重新输入:");
            }
        else if(x<y)
            {
                printf("您输入的值太小啦\n");
                printf("您还有%d次机会\n",i);
                printf("请您重新输入:");
            }
        else
            {
                printf("恭喜你猜对啦\n");
                printf("这个数字是12");
                break;
            }
        }
        }

    }
    else
    {
        printf("这么帅的老师姓什么都不知道，还想玩游戏，想屁吃");
    }
}
