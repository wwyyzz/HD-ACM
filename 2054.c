#include <stdio.h>
main()
{
   int a, b;
   while(scanf("%d%d", &a, &b) != EOF)
		{
		  if (a == b)
			printf("YES");
		  else
		    printf("NO");
		}
	return 0;
}

