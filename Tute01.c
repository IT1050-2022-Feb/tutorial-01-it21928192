/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>

int main()
{
	int sub1,sub2;
	int total,count;
	float avg;
	

		printf("Enter subject 1 marks : ");
		scanf("%d",&sub1);
		
		printf("Enter subject 2 marks : ");
		scanf("%d",&sub2);

	
	
	total=sub1+sub2;
	avg=total/2;
	
	printf("total :%d\n",total);
	printf("Average :%.2f",avg);
	
	
	
	
	
	return 0;
}
