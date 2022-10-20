#include<stdio.h>

	int main()
{
     int T;
     printf("Ketikkan suhu air : "); scanf("%d",&T);
     if(T<=0)
     printf("Wujud air padat");
     else
     {
           if (T<100)
           printf("Wujud air cair");
           else
           printf("Wujud air gas/uap\n");
     }
     
     getchar();
     return 0;
}

//septian hari sabarno
