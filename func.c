#include<stdio.h>
#include<math.h>
void aoc()
{
        float r,pie=3.14,ac;
        printf("Enter the radius of the circle: ");
        scanf("%f",&r);
        ac=pie*r*r;
        printf("The area of the circle is: %f",ac);
}
void aot()
{
        float b,h,at; 
        printf("Enter the base and height of the triangle\n");
        printf("Enter the base: ");
        scanf("%f",&b);
        printf("Enter the height: ");
        scanf("%f",&h);
        at=(1.0/2.0)*b*h;
        printf("The area of the triangle is: %f",at);
}
void choice(int a)
{
    if (a==1)
    {
        aoc();
    }
    else if(a==2)
    {
       aot();
    }
    else 
    {
        printf("Wrong Choice");
    }
}
int main()
{
    int a;
    printf("Press 1 to calculate the area of a circle\n");
    printf("Press 2 to calculate the area of a triangle\n");
    scanf("%d",&a);
    choice(a);
}