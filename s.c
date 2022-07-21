#include<stdio.h>
void areaofrectangle();
void areaofcircle();

void main()
{
	int choice;
	printf("Enter choice:");
	scanf("%d",&choice);
	if(choice==1)
	{	
		areaofrectangle();
	}
	else if(choice==2){
		areaofcircle();
	}else
	{
		printf("Invalid choice");
	}
	
}
void areaofrectangle()
{
	float a,b,area1;
	printf("Enter a:");
	scanf("%f",&a);
	printf("Enter b:");
	scanf("%f",&b);
	area1=a*b;
	printf("Area of rectangle is %.2f\n",area1);	
}
void areaofcircle()
{
	float c,area2;
	printf("Enter c:");
	scanf("%f",&c);
	area2=3.14*c*c;
	printf("Area of circle is %.2f",area2);
}