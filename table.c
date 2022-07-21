#include<stdio.h>
void main()
{
	int i,j,table;
	printf("Enter i:");
	scanf("%d",&i);
	for(i=1;i<=j;i++)
	{
		for(j=1;j<=10;j++)
		{
			table=i*j;
			printf("%d*%d=%d\n",i,j,table);
		}
		printf("\n");
	}
}