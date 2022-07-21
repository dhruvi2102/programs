#include<stdio.h>

void main()
{
	int i, a[10];
    for(i=0;i<=10;i++)
	{
		printf("Enter elements:\n");
		scanf("%d\n",a[i]);
		 }	 
		 for(i=0;i<=10;i++)
		 {
		 	if(i%2==0)
		 	{
		 		printf("even numbers are:%d",i);
		 		
			 }else{
			 	printf("odd numbers are:%d",i);
			 }
		 }
	
}