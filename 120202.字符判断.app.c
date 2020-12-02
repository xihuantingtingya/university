#include<stdio.h>
void main()
{
    char x;
    printf("请输入asdw四个字母中的一个:");
    scanf("%c",&x);
    switch(x)
    {
        case 'w':printf("你在点击“上”键!\n");break;
        case 's':printf("你在点击“下”键!\n");break;
        case 'a':printf("你在点击“左”键!\n");break;
        case 'd':printf("你在点击“右”键!\n");break;
        default:printf("您的输入有误，请重新输入！\n");
    }
}
