#include<stdio.h>
void main()
{
    //每个月的天数
    int arr[]={31,28,31,30,31,30,31,31,30,31,30,31};
    //用户输入一个月份
    int user_num;
    scanf("%d",&user_num);
    printf("%d\n",arr[user_num-1]);
}
