#include<stdio.h>

void main()
{
	int n,rem,largest=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		largest=rem;
		n/=10;
	}
	printf("Largest value is %d",largest);
}