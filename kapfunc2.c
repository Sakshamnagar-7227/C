#include<stdio.h>
#include<math.h>
int kap(int n)
{
    int l,ri,sqr,k,c=0,s;
    int dup=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    n=dup;
    sqr=n*n;
    k=(float)pow(10,c);
    l=sqr%k;
    ri=sqr/k;
    s=l+ri;
    return s;
}
int main()
{
    int n=9;
    if (kap(n)==n)
    {
        printf("The number is a Kaprekar");
    }
    else 
    {
        printf("The number is not a Kaprekar");
    }
    return 0;   
}