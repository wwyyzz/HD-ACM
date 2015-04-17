#include <stdio.h>
#define HIGHT 168

int main()
{
	int a1, a2, a3;
	scanf("%d%d%d", &a1, &a2, &a3);
	if (HIGHT < a1 && HIGHT < a2 && HIGHT < a3)
		printf("%s\n", "NO CRASH");
	else if(HIGHT > a1)
			printf("%s%d\n","CRASH ", a1 );
		else if(HIGHT > a2)
			printf("%s%d\n","CRASH ", a2 );
		else if(HIGHT > a3)
			printf("%s%d\n","CRASH ", a3 );
}
