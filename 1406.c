#include <stdio.h>

int main() 
{
 int n;
 int i, j;
 int num1, num2, num, sum, temp;
 int count;
 
    scanf("%d", &n);                      //����n 
	for (i = 1; i <= n ; i++)             //ѭ�� n �� 
     {
       scanf("%d%d", &num1, &num2);       //���뷶Χ 
       if (num1 > num2)                   //���num1 > num2 �򽻻� 
       {
       	temp = num1;
       	num1 = num2;
       	num2 = temp;
	   }
       count = 0;                         
       for ( num = num1; num <= num2 ; num++)
       {
       	sum = 0;
       	for(j = 1 ; j < num ; j++ )
       	{
       		if ( (num % j) == 0 )
       			sum +=j;
       	}

       	if (num == sum)
       		count++;

       }
	 printf("%d\n", count);
     }
    
}

