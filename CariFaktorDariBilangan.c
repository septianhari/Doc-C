/** ------------------------------------
* Program C Mencari Faktor dari Bilangan
* --------------------------------------
* contoh: faktor dari 12 : [1, 2, 3, 4, 6, 12]
*/
#include <stdio.h>
int main(){
  int angka, i;
  printf("Program Mencari Faktor dari Bilangan\n");
  printf("------------------------------------\n");
  printf("Masukkan bilangan bulat positif : ");
  scanf("%d", &angka);
  printf("Faktor dari bilangan %d yaitu", angka);
  for(i=1; i <= angka; i++){
    // sisa bagi = 0 maka termasuk faktor
    if (angka % i == 0) { 
      printf(" %d", i);
    }
  }
  printf("\n\n\n");
  return 0;
}
