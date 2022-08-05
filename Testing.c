#include <stdio.h>

int main() {
	int array[3];
	double jumlah, rataan;
	
	printf("Angka ke 1: ");
	scanf("%d", &array[0]);
	printf("Angka ke 2: ");
	scanf("%d", &array[1]);
	printf("Angka ke 3: ");
	scanf("%d", &array[2]);
	
	jumlah =  array[0] + array[1] + array[2];
	rataan = jumlah / 3;
	
	printf("Maka jumlahnya adalah %.2f dan rata-ratanya adalah %.2f", jumlah, rataan);
	
	

	return 0;
}
