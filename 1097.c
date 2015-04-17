#include <stdio.h>

int main() 
{

   int a, b, a1, a2, c;
   int i;
   while(scanf("%d%d", &a, &b) != EOF)
      {
        a1 = a2 = a ;
		for(i = 2; i <= b ; i++)
        {
        	c = a1 * a2;
        	a1 = c % 10; 
		}
		printf("%d\n", c % 10 );
      }
}
