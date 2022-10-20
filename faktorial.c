#include <stdio.h>

int main ()
{
	int n,i,fact = 1;
	printf ("\n Menentukan faktorial dari sebuah bilangan");
	printf ("\n Masukan Bilangan : ");
	scanf ("%d", &n);
		for (i = n; i >= 1; i--)
	{
		fact = fact * i;
	}		
	printf ("Faktorial dari %d adalah : %d", n,fact);
	
	return 0;
}

