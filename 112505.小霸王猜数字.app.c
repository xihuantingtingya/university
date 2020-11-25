#include<stdio.h>
void main()
{
    int x=7;
    int y;
    while(y)
    {
    printf("猜数字游戏开始啦，请输入一个数字:");
    scanf("%d",&y);
        if(x==y)
        {
            printf("恭喜你猜对啦\n");
            break;
        }
        if(x>y)
        {
            printf("您猜小啦\n");
        }
        if(x<y)
        {
            printf("您猜大啦\n");
        }
    }
}
