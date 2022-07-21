#include<stdio.h>

void main()
{
	int i,a[10],sum=0,avg;
	printf("Elements are:");
	for(i=0;i<10;i++)
	{
	 scanf("%d",&a[i]);
	 sum=sum+a[i];
	}
        avg=sum/10;
		printf("Sum of elements is %d and avg of elements is %d",sum,avg);
	
	
}