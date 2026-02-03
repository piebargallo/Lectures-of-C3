#include <stdio.h>
#define N 4

// datatype of array[size/array];

int main()
{
	int n[N] = {1, 2, 3, 4};

    for (int i=0; i<4; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");
    
    return 0;
}