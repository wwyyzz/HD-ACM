#include <stdio.h>
#include <string.h>

int main() 
{
 int i, j, T, count;
 char string[1000];
 
 scanf("%d", &T);
 getchar() ;
	
	for (i = 1; i <= T ; i++)
     {
       gets(string);
       count = strlen(string);

       for ( j = count - 1 ; j >= 0 ; j--)
       	{printf("%c",string[j]);
		   }
       printf("\n"); 
        
      
     }

	
}
