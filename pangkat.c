#include <stdio.h>

int main()
{
	int a,b,i,result = 1;
	printf ("Masukan nilai : ");
	scanf ("%d", &a);
	printf ("Masukan pangkat : ");
	scanf ("%d", &b);
	for ( i = 1; i <= b; i++){
		result = result * a;
	}
	printf ("%d ^ %d adalah %d", a, b, result);
		
	return 0;
}
