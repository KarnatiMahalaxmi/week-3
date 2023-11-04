#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the value n=");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("\nthe number of digits in the number is %d",count);
	return 0;
}
