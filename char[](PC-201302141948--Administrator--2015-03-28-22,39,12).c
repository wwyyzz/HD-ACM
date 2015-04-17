#include <stdio.h>


int main()
{
	int i ;
	char a[100], b[100];
	scanf("%s%s", a, b);
	
	for(i = 0 ; i<100 ; i++)
		printf("%d\n",a[i]);
	
	printf("%s   %s", a, b);


	return 0;
}
