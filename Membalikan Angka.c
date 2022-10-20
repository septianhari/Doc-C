/** ------------------------------
* PROGRAM C UNTUK MEMBALIKAN ANGKA
* --------------------------------
* barno
*/
#include <stdio.h>
int main(){
  int angka, sisa;
  int reverseNumber = 0;
  printf("Program C Membalikan Angka\n");
  printf("--------------------------\n");
  printf("Masukkan suatu bilangan bulat : ");
  scanf("%d", &angka);
  while ( angka != 0 ){
    sisa    = angka % 10; 
    reverseNumber  = reverseNumber * 10 + sisa;
    angka   = angka / 10;
  }
  printf("------------------------------------\n");
  printf("Hasil setelah angka dibalik = %d\n", reverseNumber);
  return 0;
}
