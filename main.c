#include <stdio.h>

int main() {
	int x, y;
	printf("Hello, World!\n");
	
	printf("Input a number\n");
	scanf("%d", &x);
	printf("Input a second number\n");
	scanf("%d", &y);
	
	printf("%d + %d is equall to %d\n", x, y, x + y);
	printf("%d - %d is equall to %d\n", x, y, x - y);
	printf("%d * %d is equall to %d\n", x, y, x * y);
	printf("%d / %d is equall to %d", x, y, x / y);
	
	printf("Passada do teu mano....flw");
	return 0;	
}
