#include <stdio.h>
main()
{
	int kdhari ;
	printf ("masukan kode hari [1-7] : ");
	scanf ("%d", &kdhari);

	switch (kdhari)
		{
			case 1 :
				printf (" senin ");
				break;
			case 2 :
				printf (" selasa ");
				break;
			case 3 :
				printf (" rabu ");
				break;
			case 4 :
				printf (" kamis ");
				break;
			case 5 :
				printf (" jumat ");
				break;
			case 6 :
				printf (" sabtu ");
				break;
			case 7 :
				printf (" minggu ");
				break;
			default :
					printf (" kode tidak ada");
		}
}
