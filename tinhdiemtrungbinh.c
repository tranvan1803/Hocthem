#include <stdio.h>

int main (){
	int count = 0;
	float total = 0;
	char choice;
	char subject[50];
	float score;
	
	do {
		printf("nhap ten mon hoc: ");
		scanf("%s", subject);
		printf("nhap diem: ");
		scanf("%f", &score);
		total += score;
		count++;
		printf("ban co muon tiep tuc hay khong? (y/n): ");
		scanf("%c", &choice);
	} while (choice == 'y' || choice == 'y');
	
	if (count > 0) {
		double average = total/count;
		printf("diem trung binh cua ban la: %.2lf\n", average);
	} else {
		printf("khong co mon hoc nao duoc nhap diem.\n");
	}
	return 0;
}
