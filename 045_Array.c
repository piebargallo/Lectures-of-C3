#include <stdio.h>
#include <stdlib.h>

// It run time
int main() {
    
	int n, i;
    int *array;

    printf("Introduce el numero de elementos: ");
    scanf("%d", &n);

    // Reservamos memoria dinámicamente
    array = (int *)malloc(n * sizeof(int));

    // Comprobamos si la memoria se asignó correctamente
    if (array == NULL) {
        printf("Error al reservar memoria\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Introduce el elemento %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nContenido del array:\n");
    for (i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // Liberamos la memoria
    free(array);

    return 0;
}
