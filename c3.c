#include<stdio.h>
int main()
{
    int num;
    printf("enter value of num");
    scanf("%d",&num);
    printf("value is %d \n ",num);

    //the left shift operator << multiplies by 2.
    int multiply = num << 1;
    printf("multiplication is %d \n",multiply);
    //the right shift operator >> devide by 2.
    int devide = num >> 1;
    printf("division is %d \n",devide);

    return 0;

}
