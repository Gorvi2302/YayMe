#include<stdio.h>
main()
{
	int n,m,i,flag=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		flag=1;
		break;
	}
	 
	 if(n==1)
	 {
	 	printf("1 is neither prime nor composite.");
	 }
	else if(flag==0)
	{
	printf	("%d is a prime number",n);
}
	 else
	 {
	 printf("%d is not a prime number",n);
}
}
