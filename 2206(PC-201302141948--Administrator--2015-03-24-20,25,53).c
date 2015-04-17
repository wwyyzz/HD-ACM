#include <stdio.h>
main()
{
   int a, b, c, d;
   while(scanf("%d.%d.%d.%d", &a, &b, &c, &d) != EOF)
		{
			printf("%d %d %d %d", a,b,c,d);
			if( (0<a<=255 )&& (0<=b<=255 )&& (0<=c<=255 )&& (0<a<=255))
				printf("YES\n");
			else
				printf("NO\n");
		}
	return 0;
}
