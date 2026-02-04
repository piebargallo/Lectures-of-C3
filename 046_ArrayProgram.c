#include <stdio.h>

int main()
{
	int i;
	int a[4];
	
	printf("Enter a array elements\n");
	for(i = 0; i < 4; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < 4; i++)
	{
		printf("\nArray element at index %d is: %d ", i, a[i]);
	}
	printf("\n");
	
	for(i = 3; i >= 0; i--)
	{
		printf("\nArray element at inverse index %d is: %d", i, a[i]);
	}
	
	return 0;
}