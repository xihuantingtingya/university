#include<stdio.h>
#include<string.h>
void main()
{   printf("吃货的日程总是被安排的明明白白，请问现在是什么节？\n");
    printf("请输入:");
    char a[]="";
    scanf("%s",a);
    if(!strcmp(a,"春节"))
    {
        printf("给我安排饺子！",a);
    }
    else if(!strcmp(a,"端午节"))
    {
        printf("给我安排粽子！");
    }
    else if(!strcmp(a,"中秋节"))
    {
        printf("给我安排月饼！");
    }
    else if(!strcmp(a,"元宵节"))
    {
        printf("给我安排元宵！");
    }
    else
    {
        printf("您的输入有误！");
    }
}
