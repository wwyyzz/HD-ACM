#include <stdio.h>
#include <stdlib.h>

int cmp ( const void *a , const void *b )
{
return *(int *)a - *(int *)b;
}


main()
{
	int i, j, k, l, T, N, num;
	int sort[1000];
	while(scanf("%d", &T) != EOF)
	{
		for (i = 1; i <= T ; i++)
		{
		scanf("%d", &N);
//		printf("%d  %d\n", T, N);
		for( j = 0; j< N; j++)
		  {
			scanf("%d", &sort[j]);
          }
		qsort(sort,N,sizeof(sort[0]),cmp);
		
		for( k = 0; k< N-1; k++)
		  {
			printf("%d ", sort[k]);
          }
        printf("%d\n", sort[N-1]);

		  }
		}

	return 0;

}

