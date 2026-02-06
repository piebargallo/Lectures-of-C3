#include <stdio.h>
#define N 4

int main()
{
	int arr1[N], arr2[N], sumarr[N];
	int i;
	
	printf("Enter a numbers of arry1\n");
	for(i = 0; i < 4; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	printf("Enter a numbers of array2\n");
	for(i = 0; i < 4; i++)
	{
		scanf("%d", &arr2[i]);
	}
	
	for(i = 0; i < 4; i++)
	{
		sumarr[i] = arr1[i] + arr2[i];
		printf("Sumarr element at index %d is: %d\n", i, sumarr[i]);
	}
	
	return 0;
}