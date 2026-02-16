#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];

    puts("Enter string");   

	// fgets guarda también el salto de línea (\n) cuando presionas Enter.
	// Eso puede provocar que se vea un espacio extra al imprimir.
    fgets(str, sizeof(str), stdin);
    // Para eliminar el salto de línea extra.
    str[strcspn(str, "\n")] = '\0';

    puts("You entered:");   
    puts(str);              

    return 0;
}
