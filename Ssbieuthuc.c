#include <stdio.h>

int main() {
	int a = 5;
	int b = 10;
	int c = 7;
	
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("c = ");
	scanf("%d", &c);
	
	printf("bieu thuc vi du la: a + b > c && a != b\n");
	printf("ket qua bieu thuc (%d + %d > %d && %d != %d)\n", a,b,c,a,b );
	int ketqua = a + b > c && a != b;
	printf("ket qua: %d\n", ketqua);
	
	printf("bieu thuc vi du la: a + b > c ||a != b\n");
	printf("ket qua bieu thuc (%d + %d > %d || %d != %d)\n", a,b,c,a,b );
	int ketqua2 = a + b > c ||a != b;
	
	printf("ket qua: %d\n", ketqua2);
	
	return 0;
}