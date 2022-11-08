#include <stdio.h>

int main() {
	int x, y;
	printf("Hello, World!\n");
	
	printf("Input a number\n");
	scanf("%d", &x);
	printf("Input a second number\n");
	scanf("%d", &y);
	
	printf("%d + %d é igual a %d", x, y, x + y);
	return 0;
}
