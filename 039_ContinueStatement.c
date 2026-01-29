#include <stdio.h>

int main()
{
	int a = 0, i, sum = 0;
	
	for(i = 1; i < 5; i++) 
	{
		printf("Enter a number: ");
		scanf("%d", &a);
		if( a < 0 )
		{
			continue;
		}
		sum = sum + a;
	}
	printf("%d", sum);
	
	return 0;
}