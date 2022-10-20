#include <stdio.h>
HitungLuasBujurSangkar(int sisi)
{
	int L;
	L = sisi * sisi;
	return L;
}

main()
{
	int s, Luas;
	printf("Masukan nilai sisi :");
	scanf("%d", &s);
	Luas=HitungLuasBujurSangkar(s);
	printf("Luas Bujur Sangkar adalah %d",Luas);
	return 0;
	
}
