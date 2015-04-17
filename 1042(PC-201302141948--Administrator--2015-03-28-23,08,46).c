#include <stdio.h>


main()
{
	int i,n ;
	n =100;
	long long result;
	result =1;
	
	for (i = 1 ; i <= n ; i++)
		result *= i;
	
	printf("%lld", result);

	return 0;
}
