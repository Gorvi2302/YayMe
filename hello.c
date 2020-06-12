#include<stdio.h>
main()
{
  int a,b;
printf("Enter number 1: ");
scanf("%d",&a);
printf("Enter number 2: ");
scanf("%d",&b);
a+=b;
b=a-b;
a-=b;
printf("Now number 1 is %d and number 2 is %d",a,b);
}
      
