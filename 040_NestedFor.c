#include <stdio.h>

int main()
{
	int j, i;
	
	for(j = 1; j < 6; j= j + 1){ // Outer loop statement block
		for(i = 1; i < 6; i = i + 1){ // Inner l.S.B
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}