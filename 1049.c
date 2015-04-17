
#include <stdio.h>
main()
{
   int n, u, d, min;
   
   while((scanf("%d%d%d", &n, &u, &d) != EOF) && n!=0)
		{
	      min = 0;
		  while( n > 0)
		  {
		  	  n = n - u ;
			  min++;
			  if ( n <= 0)
			  	break;
			  else
			    {
				n = n + d ;
			    min++;
			    }

		  }
		printf("%d\n",min);
		}
}
