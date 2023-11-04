/*to find sum of first n natural numbers*/
#include<stdio.h>
int main()
{
	int i,n,s;
	s=0;
	printf("enter the value of n=");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		s=s+i;
	}
	printf("the sum of n number= %d",s);
	return 0;
}
