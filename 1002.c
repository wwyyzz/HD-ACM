#include <stdio.h>
#include <string.h>
#define MAXLEN 1000
#define ZERO 0

char a[MAXLEN], b[MAXLEN], sum[MAXLEN];
int carry = 0;

int main()
{
  int i, j=0, k=0, n , add ;
  scanf("%d", &n);
   for (i = 0 ; i < n ; i++)
   {
//		memset(a, ZERO, sizeof(a));
//		memset(b, ZERO, sizeof(b));
//		memset(sum, 0, sizeof(sum));
			
		scanf("%s%s", a, b);
		
		i = strlen(a);
		j = strlen(b);
		max = (i>j)?i:j;
		
		for(k=0; k<=max; k++)
		{
			add = carry + a[i-1] - 48 + b[j-1] - 48 ;
			if ( add >= 10 )
				{
				sum[j] = add - 10 + 48 ;
				carry = 1; 
//				printf("%d  %d\n", add,carry);
			    }
			else
				{
				sum[j] = add + 48;
				carry  = 0;
			    }
		}

		while(  ((a[j] != ZERO) || (b[j] != ZERO) || carry != 0) )

		{
			if (a[j] == 0 )
				a[j] = 48;
			if (b[j] == 0 )
				b[j] = 48;
			add = (carry + a[j] - 48) + (b[j] - 48) ;
//			printf("%d  %d\n", a[j],b[j]);
			if ( add >= 10 )
				{
				sum[j] = add - 10 + 48 ;
				carry = 1; 
//				printf("%d  %d\n", add,carry);
			    }
			else
				{
				sum[j] = add + 48;
				carry  = 0;
			    }
				
			
			printf("%d  %d\n", sum[j],carry);
			j++ ; 
		}
		
//   	printf("%s",sum);
//   	printf("%d",sum[3]);
   	for ( k = 10; k<0 ; k--  )
   		{
   			if (sum[k] != 0)
   				printf("%d",sum[k]);
		   }
   }

	

	return 0;
}
