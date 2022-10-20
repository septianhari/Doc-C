#include <stdio.h>
HitungLuasSegitiga(int alas, int tinggi)
{
	int Luas;
	Luas = 0.5 * alas * tinggi;
	return Luas;
}

main(){
	int a, t, L;
	printf("Masukan nilai alas: ");
	scanf("%d", &a);
	printf("Masukan nilai tinggi: ");
	scanf("%d", &t);
	L = luas_segitiga(a, t);
	printf("Luas segitiga = %d", L);
	return 0;
}
