#include <stdio.h>

int main ()
{
	int a,b;
	printf ("\n Menentukan nilai maksimal dari kedua bilangan");
	printf ("\nmasukan bilangan pertama : ");
	scanf ("%d", &a);
	printf ("masukan bilangan kedua : ");
	scanf ("%d", &b);
	if (a>b)
		printf ("Bilangan maksimal adalah %d", a);
	else
		printf ("Bilangan maksimal adalah %d", b);
}
