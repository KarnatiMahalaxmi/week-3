/*to find factorial of a number*/
#include<stdio.h>
int main()
{
	int i,n,s;
	s=1;
	printf("enter the valus of n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s*i;
    }
    printf("the factorial of number= %d",s);
    return 0;
}
