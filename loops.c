#include<stdio.h>
int main()
{
	int i,count;
	for(i=1;i<7;i++)
	{
		for(count=1;count<=i;count++)
		{
			printf("01");
		}
		printf("\n");
	}
	return 0;
}
