#include <stdio.h>
float jumlah (float x,float y);
main()
{
	int a = 6;
	int b = 3;
	float c;
	c = jumlah (a,b);
	printf("a + b = %g\n", jumlah (20.1,0.6));
}

	float jumlah (float x, float y)
{
	return (x + y);
}
