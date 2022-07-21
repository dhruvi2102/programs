#include<stdio.h>

void main()
{
	int n,m,sum;
	printf("Enter value:");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n/=10;
	}
	printf("Sum of number is %d",sum);
}