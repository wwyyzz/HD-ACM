#include <stdio.h>
int main()
{
	int a, b, i , max, lcm;

	while(scanf("%d%d", &a, &b) != EOF)
		{
		max = (a >= b ) ? a : b ;
		for (i = max ; i <= a *b ; i++)
		{
			if (i % a ==0 && i % b == 0)
				{
				printf ("%d\n", i);
				break;
			    }

		 } 
	    }

}

