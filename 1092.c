#include <stdio.h>
main()
{
   int i, a, n, sum;
   
   while(scanf("%d", &n) != EOF)
		{
		if (n == 0)
			return 0;
      	else
		  {
		  sum = 0;
		  for (i =1 ; i<= n; i++)
			{
			scanf("%d", &a);
		  	sum += a ;
		    }
		  printf("%d\n", sum);
	      }
		}
}
