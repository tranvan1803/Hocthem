#include <stdio.h>

int main() {
	int num, res;
	printf("Enter one number");
	scanf("%d", &num);
	res = num % 2;
	if (res == 0)
	printf("Even number\n");
	else
	printf("Odd number\n");
	
	return 1;
}