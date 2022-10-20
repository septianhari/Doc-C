#include <stdio.h>

int main (void)
{
	char nama[20];
	printf("input nama:");
	scanf("%s",nama);
	
	printf("\n");
	printf("Selamat belajar %s \n", nama);
	
	getchar();
	return 0;
}
