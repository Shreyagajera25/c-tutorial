#include<stdio.h>
void main()
{
   int a=1;
   printf("customer one buy a one ticket is %d \n",a);
   int b=++a;
   printf("customer two buy a one ticket is %d \n",b);
   int c=++a;
    printf("customer three buy a one ticket is %d \n",c);
   int d=++a;
   printf("customer four buy a one ticket is %d \n",d);
   int e=a++;
   printf("customer four return a one ticket is %d \n",e);
   int f=--a;
   printf("customer five buy a one ticket is %d \n",f);
   int h=++a;
   printf("customer six buy a one ticket is %d \n",h);
   int k=a++;
   printf("customer six return a one ticket is %d \n",k);
   int j=--a;
   printf("customer seven buy a one ticket is %d \n",j);
   printf("total sold ticket is %d",a);


}
