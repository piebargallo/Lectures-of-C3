#include <stdio.h>

int main()
{
	float marks[4];
	int i; 
	float sum = 0.0, avg;
	
	printf("Enter marks of four students\n");
	
	for(i = 0; i < 4; i++)
	{
		scanf("%f", &marks[i]);
	}
	
	for(i = 0; i < 4; i++)
	{
		sum = sum + marks[i];
	}
	
	avg = sum / 4;
	
	printf("Sum is: %f\n", sum);
	printf("average = %f", avg);
	printf("\n");
	
	return 0;
}