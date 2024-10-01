#include<stdio.h>
int main()
{
    int i,j,min,temp;
    int a[]={5,1,3,2,4};
    int n=5;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min=j;
        } 
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("Printed sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}