#include<stdio.h>
#include<windows.h>
void main()
{
    int i=0;
    printf("欢迎使用秒表计时器:\n");
    while(1)
    {
        i++;
        system("cls");
        printf("第%d秒过去了\n",i);
        Sleep(1000);
    }
}
