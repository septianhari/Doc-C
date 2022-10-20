#include <stdio.h>
int main ()
{
int A,B;
float  C;
printf("Masukkan nilai bilangan A : ");
scanf ("%d", &A); //input nilai bilangan A
printf("Masukkan nilai bilangan B : ");
scanf ("%d", &B); //input nilai bilangan B
C = A+B;            //hitung jumlah
printf("Jumlah      nilai bilangan C : %.2f", C); //tampilkan nilai bilangan C

return 0;
}
