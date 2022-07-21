#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,sum,total=500;
	float per;
	printf("Enter s1:");
	scanf("%d",&s1);
	printf("Enter s2:");
	scanf("%d",&s2);
	printf("Enter s3:");
	scanf("%d",&s3);
	printf("Enter s4:");
	scanf("%d",&s4);
	printf("Enter s5:");
	scanf("%d",&s5);
	sum=s1+s2+s3+s4+s5;
	printf("Sum is %d\n",sum);
	per=sum*100/total;
	printf("Percentage is %.2f",per);
	if(per>75)
	{
		printf("Distinction");
	}else if(per>60 && per<=75)
	{
		printf("First Class");
	}else if(per>50 && per<=60)
	{
		printf("Second Class");
	}else if(per>35 && per<=50)
	{
		printf("Pass class");
	}else
	{
		printf("Fail");
	}
}