#include <stdio.h>
int terbesar (int input[]);
main()
{
	int i,nilai[5];
	printf("masukan 5 nilai : \n");
	for(i=0;i<5;i++)
{
	printf("masukan nilai ke %d = ",i+1);
	scanf("%d", &nilai[i]);
}
printf("Nilai terbesar = %d\n",terbesar(nilai));
}

	int terbesar(int input[])
{
	int i,besar=0;
	for (i=1;i<5;i++)
{
	if(input[besar] < input[i])
	besar=i;
}
	return input[besar];
}

