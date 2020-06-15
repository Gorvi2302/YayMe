#include<stdio.h>
addition();  //function prototype
main()  //core functionality
{
	addition();  //function call
}

//function definition
addition(){
	int a=0,d,check=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	do{
	d=a%10;
	check+=d;
	a/=10;
	}while(a!=0);
	printf("The sum of the digits is %d",check);
	}
