#include<stdio.h>
void main()
{
    int a,b,c,t;
    printf("请输入三个整数,请用逗号隔开:");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b){
        t=a;
        a=b;
        b=t;}
    if(a>c){
        t=a;
        a=c;
        c=t;}
    if(b>c){
        t=b;
        b=c;
        c=t;}
    printf("这三个数从小到大排序是:\n");
    printf("%d\n%d\n%d",a,b,c);
}
