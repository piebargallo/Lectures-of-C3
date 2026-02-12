#include <stdio.h>
#define n 0
#define m 2

int main()
{
    int a[m][m], i, j, sr, sc;

    printf("Enter elements of matrix\n");
    for(i = n; i < m; i++)
    {
        for(j = n; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Elements of matrix:\n");
    for(i = n; i < m; i++)
    {
        for(j = n; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Row sums
    for(i = n; i < m; i++)
    {
        sr = 0;
        for(j = n; j < m; j++)
        {
            sr += a[i][j];
        }
        printf("Sum of row %d = %d\n", i, sr);
    }

    // Column sums
    for(i = n; i < m; i++)
    {
        sc = 0;
        for(j = n; j < m; j++)
        {
            sc += a[j][i];
        }
        printf("Sum of column %d = %d\n", i, sc);
    }

    return 0;
}
