#include <stdio.h>


int main () {
	int a, b, c, sum;
	printf("Enter the Maths number: ");
	scanf("%d", &a);
	printf("Enter the Physical number: ");
	scanf("%d", &b);
	printf("Enter the Chemistry number: ");
	scanf("%d", &c);
	sum = a + b + c;
	printf("The total number is: %d", sum);
	return 0;
}