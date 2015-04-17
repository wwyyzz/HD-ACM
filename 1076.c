#include <stdio.h>

int main() 
{ 
	int T, Y, N, i;

	scanf("%d",&T);
	for( i=0; i<T; i++) 
	{   
		scanf("%d%d",&Y, &N);
		while( N > 0 )
		{
			if((Y%4==0 && Y%100!=0) || Y%400==0)
				{
				N--;Y++;}
			else	
				Y++;
		}

		printf("%d\n",Y-1);
	
	}

}
