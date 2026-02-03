#include <stdio.h>
#define N 4

// At compile time
int main()
{
	int n[N] = {0}; // posicions a cero per defecte

    for (int i=0; i<4; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");
    
    return 0;
}

// output 0 0 0 0