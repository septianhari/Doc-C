/***
 * CREATED by septian hari sabarno
 * PROGRAM MENUKAR DUA ANGKA DENGAN BAHASA C
*/
#include <stdio.h>
int main()
{
    double angka1, angka2; // deklarasi varible
    
    printf("Masukan Angka Pertama : ");
    scanf("%lf", &angka1);
    printf("Masukan Angka Kedua: ");
    scanf("%lf", &angka2);
    
    ///PROSES MENUKAR
    angka1 = angka1 - angka2;
    angka2 = angka1 + angka2;
    angka1 = angka2 - angka1;
    
    printf("\nSESUDAH PENUKARAN ANGKA: \n");
    printf("Angka Pertama : %.0lf\n", angka1);
    printf("Angka Kedua   : %.0lf", angka2);
    
  return 0;
}

