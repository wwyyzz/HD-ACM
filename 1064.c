#include <stdio.h>

int main()
{
	int n;
	float total, month;
	n = 12;
	total = 0.00;
	month = 0.00;
	
	while( n > 0)
	{
		
		scanf("%f", &month);
		total += month;
		n--;
		
	}
	printf("$%.2f\0", total/12.00);
}
