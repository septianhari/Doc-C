#include <stdio.h>
tukar (int x, int y)
{
	int z;
	z = x;
	x = y;
	y = z;
	printf("Nilai diakhir fungsi tukar()\n");
	prinf("x = %d y = \n\n",x,y);
	return(x,y);
}
main()
{
	int a,b;
	printf("masukan nilau a=");
	scanf("%d", &a);
	printf("masukan nilai b=");
	scanf("%d", &b);
	printf("Nilai sebelum pemanggilan fungsi\n");
	printf("a = %d b = %d\n",a,b);
	
	//tukar (a,b);
	printf("Nilai sesudah pemanggilan fungsi\n");
	prinf("a =%d b = %d\n", tukar (a,b) );
}
