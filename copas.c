#include <stdio.h>
#include <math.h>

int bulatkan(int nilai){
	double hasil = (double) nilai / 1000;
	int bulat = (int)lround(hasil);
	return bulat * 1000;
}

int main(){
	printf("========= Prgram C ============");
	
	int nilai1 = 9400;
	int nilai2 = 9500;
	
	printf("nilai1 = %d", bulatkan(nilai1));
	printf("nilai2 = %d", bulatkan(nilai2));
	
	
	return 0;
}
