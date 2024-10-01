#include<stdio.h>
int main()
{
    int a[]={1,2,3};
    int b[]={4,5,6,7};
    int c[7];
    int j=0,k=0;
    for(int i=0;i<7;i++)
     {
        if(j<3)
          {
            c[i++]=a[j++];
            c[i]=b[k++];
          }
        else
          c[i]=b[k++];
     }
    printf("The merged array: ");
    for (int i=0;i<7;i++)
    {
        printf(" %d ",c[i]);
    }
}