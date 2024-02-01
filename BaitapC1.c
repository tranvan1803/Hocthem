#include <stdio.h>


int main () {
	int a , b , c , i , d;
	
	printf(" Enter number a : ");
	scanf("%d", &a);
	
	printf(" Enter number b: ");
	scanf("%d", &b);
	
	printf(" Enter number c: ");
	scanf("%d", &c);
	
	printf(" Enter number i: ");
	scanf("%d", &i);
	
	printf(" Enter number d: ");
	scanf("%d", &d);
	
	int resault1 = ++i % 7;
	int resault2 = i++ % 7;
	int resault3 = 5 * (c - 3 + d);
	int resault4 = a * (b + c /d) - 22;
	
	printf("resault1  : %d\n" ,kq1);
	printf("resault2  : %d\n" ,kq2);
	printf("resault3  : %d\n" ,kq3);
	printf("resault4  : %d\n" ,kq4);
	
	return 0;

}