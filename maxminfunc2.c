#include<stdio.h>
int max(int a,int b)
{
    if (a>b)
    return a;
    else if (b>a)
    return b;
    else if (a==b)
    return 0;
}
int max2(int a,int b,int c)
{
    if(a>b && a>c)
    return a;
    else if(b>c && b>a)
    return b;
    else if(c>b && c>a)
    return c;
    else 
    return 0;
}
int main()
{
    printf("%d\n",max(10,20));
    printf("%d",max2(10,20,30));
    return 0;
}