#include <stdio.h>

// At compile-time
int main()
{
	// Elements a11 a12 a13 a21 a22 a23 (aij i = row j = column)
	int a[2][3] = {
					{0, 0, 0}, 
					{1, 1, 1}
				  };
	
	// By default a21 a22 a23 whit zero
	int b[2][3] = {0, 0 ,1 };
	
	// For all elements whit zero
	int c[2][3] = {0};
}