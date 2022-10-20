#include <stdio.h>

int pow(int a, int b)
{
	int i ,result = 1;
	for ( i = 1; i <= b; i++)
	{
		result = result*a;
	}
	return result;
}

int main()
{
	int a,b,result;
	printf ("Masukan nilai : ");
	scanf ("%d", &a);
	printf ("Masukan pangkat : ");
	scanf ("%d", &b);
	result=pow(a,b);
	printf ("%d ^ %d adalah %d", a, b, result);
	
}	
