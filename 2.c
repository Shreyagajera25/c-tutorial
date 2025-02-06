#include<stdio.h>
void main()
{
    int x,y,z;

    printf("enter value of x");
    scanf("%d",&x);
    printf("x is %d \n",x);
    printf("enter value of y");
    scanf("%d",&y);
    printf("y is %d \n",y);
    z=(x>y)?printf("x is maximum"):printf("x is minimum");


}
