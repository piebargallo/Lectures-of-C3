// Read string using gets funtion
#include <stdio.h>

int main()
{
	char str[10];
	printf("Enter string\n");
	fgets(str, sizeof(str), stdin);
	printf("%s", str);
	return 0;
}