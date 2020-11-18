#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a=3,b=4,c=5,x=1,y=0;
    if(a+b>c&&b==c)
    printf("为真命题\n");
    else{printf("为假命题\n");}
    if(a||b+c&&b-c)
    printf("为真命题\n");
    else{printf("为假命题\n");}
    if(!(a>b)&&!c||1)
    printf("为真命题\n");
    else{printf("为假命题\n");}
    if(!(a+b)+c-1&&b+c/2)
    printf("为真命题\n");
    else{printf("为假命题\n");}
    if(!(x=a)&&(y=b)&&0)
    printf("为真命题\n");
    else{printf("为假命题\n");}
}
