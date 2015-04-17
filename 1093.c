#include <stdio.h>
main()
{
	int i, j, n, a, num, sum;
	scanf("%d", &n);
	for (i = 1; i <= n ; i++)
		{
		  scanf("%d", &num);
		  sum = 0;
		  for (j =1 ; j<= num; j++)
			{
			scanf("%d", &a);
		  	sum += a ;
		    }
		  printf("%d\n", sum);

		}
	return 0;

}
