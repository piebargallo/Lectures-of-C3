#include <stdio.h>

// At run-time
int main()
{
	int a[2][3];
	int i, j;
	
	for(i = 0; i < 1; i++)
	{
		for(j = 0; j < 3; j++){
			scanf("%d", &a[i][j]);
		}
	}
}