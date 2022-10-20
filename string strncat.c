#include <stdio.h>
#include<stdio.h>
main()
{
	char s1[50]="STTI";
	char s2[21]="NIIT";
	strncat(s1, s2, 3);
	printf("%s", s1);
	return 0;
}
