#include<stdio.h>
#include<math.h>
int max,i,min;
void findmax(int a[])
{
    for (i=0;i<4;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    
}
void findmin(int a[])
{
    for (i=0;i<4;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
}

int main()
{
    int a[]={36,25,71,712};
    max=a[0];
    min=a[0];
    findmax(a);
    findmin(a);
    printf("Maximum no is: %d\n",max);
    printf("MInimum no is: %d",min);
    return 0;
}