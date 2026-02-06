#include <stdio.h>

int main()
{
	int a[4];
	int i, even = 0, odd = 0;
	
	printf("Enter a elements array\n");
	for(i = 0; i < 4; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < 4; i++)
	{
		if(a[i] % 2 == 0){
			even = even + 1;
		} else {
			odd++;
		}
	}
	
	printf("Even elements are: %d\n", even);
	printf("Odd elements are: %d", odd);
	printf("\n");
	
	return 0;
}