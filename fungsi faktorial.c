#include <stdio.h>

int fact(int num)
{
	if (num)
		return (num * fact(num - 1));
	else
		return 1;	
}

int main()
{
	int num;
	printf ("\n Menentukan faktorial dari sebuah bilangan");
	printf ("\n Masukan nilai : ");
	scanf ("%d", &num);
	
	printf ("\n Faktorial dari %d adalah : %d",num, fact(num));
	
	return 0;
}
