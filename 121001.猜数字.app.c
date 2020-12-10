#include<stdio.h>
#include<string.h>
void main()
{
    printf("猜数字小游戏\n");
    printf("我们帅帅的C语言老师姓什么?\n");
    printf("您的答案:");
    int x,y=12;
    char m[]="";
    char n="曹";
    scanf("%s",&m);
    if(!strcmp(m,"曹"))
    {
        printf("请输入您心目中的数字,1到20以内哦:\n");
        while(x)
        {
        scanf("%d",&x);
            if(x>y)
            {
                printf("您输入的值太大啦\n");
                printf("请您重新输入:");
            }
            if(x<y)
            {
                printf("您输入的值太小啦\n");
                printf("请您重新输入:");
            }
            if(x==y)
            {
                printf("恭喜你猜对啦\n");
                printf("这个数字是12");
                break;
            }
        }
    }
    else
    {
        printf("这么帅的老师都不知道，还想玩游戏，想屁吃");
    }
}
