#include <stdio.h>
#include <string.h>

int main()
{
	int i ;
	char a[100], b[100];
//	memset(a, 0, sizeof(a));
	scanf("%s%s", a, b);
	
	printf("%d\n",strlen(a));
	for(i = 9 ; i<1 ; i--)
		if ( a[i] != 0)
			printf("%d\n",a[i]);
	
	printf("%s   %s", a, b);


	return 0;
}
