#include<stdio.h>
int main()
{
	int kodok, lompat;
	
	for (kodok = 1; kodok <= 3; kodok++)
	{
		printf("KODOK\n");
		for (lompat = 1; lompat <= kodok; lompat++)
		{
			printf("LOMPAT\,");
		}
		printf("\n");
	}
	return 0;
}
