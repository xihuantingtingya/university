#include<stdio.h>
void main()
{
    int x=0;
    while(x<=1024)
    {
        if(x%2==0)
            printf("%d\n",x);
        x++;
    }
}
