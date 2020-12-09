#include<stdio.h>
#include<string.h>
#include<windows.h>
void main()
{
    char s1[]="今天天气真好";
    char s2[]="早安打工人";
    if(strcmp(s1,s2)==0)
    {
        printf("相同\n");
    }
    else
    {
        printf("不相同\n");
    }
    Sleep(3000);
    printf("串比二：\n");
    char s3[]="今天天气真好";
    char s4[]="今天天气真好";
    if(strcmp(s3,s4)==0)
    {
        printf("相同");
    }
    else
    {
        printf("不相同");
    }
}
