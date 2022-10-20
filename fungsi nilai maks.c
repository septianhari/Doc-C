#include <stdio.h>

int max(int num1, int num2)
{
	int result;
	if (num1 > num2)
		result = num1;
	else
		result = num2;
	return result;
}

int main ()
{
	int a,b;
	printf ("\n Menentukan nilai maksimal dari kedua bilangan");
	printf ("\nmasukan bilangan pertama : ");
	scanf ("%d", &a);
	printf ("masukan bilangan kedua : ");
	scanf ("%d", &b);
	int tertinggi = max(a,b);
	printf ("Nilai maksimalnya adalah : %d \n", tertinggi);
}
