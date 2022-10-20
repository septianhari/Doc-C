#include <stdio.h>


int main()
{
    double angka1, angka2, x;
    
    printf("Masukan Angka Pertama: ");
    scanf("%lf", &angka1);
    printf("Masukan Angka Kedua: ");
    scanf("%lf", &angka2);
    
    x = angka1;
    angka1 = angka2;
    angka2 = x;
    
    printf("Sesudah ditukar:\n");
    printf("Nilai dari angka pertama : %.1lf\n", angka1);
    printf("Nilai dari angka kedua: %.1lf", angka2);
    
    getchar();
	return 0;
}
