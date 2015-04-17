//#include <stdio.h>
//main()
//{
//	int i, j, n, a, m, sum;
//	scanf("%d", &n);
//	for (i = 1; i <= n ; i++)
//		{
//		  scanf("%d", &m);
//		  sum = 0;
//		  for (j =1 ; j<= m; j++)
//			{
//			scanf("%d", &a);
//		  	sum += a ;
//		    }
//		  printf ("%d",i);
//		  if (i ==n )
//		  	printf("%d", sum);
//		  else
//		    printf("%d\n\n", sum);
//
//		}
//	return 0;
//
//}

#include<stdio.h>

int main() {
	int a,sum,n,m;
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("%d",&m);
		sum = 0;
		for(int j=0; j<m; j++) {
			scanf("%d",&a);
			sum += a;
		}
		printf("%d\n",sum);
		if(i<n-1) printf("\n");
	}
	return 0;
}
 

