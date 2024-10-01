#include<stdio.h>
#include<math.h>
int n;
int c=0;
int prime()
{

    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    return c;
}
int main()
{
    prime();
    if(c==2)
    {
        printf("%d is prime",n);
    }
    else 
    {
        printf("%d is not a prime",n);
    }
    return 0;
}

