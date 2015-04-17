#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c,i,d,j,sum,t;
	scanf("%d",&c);
	while(c--)
	{
		d=0;
		scanf("%d%d",&a,&b);
		if(a>b)                 //当a>b时，交换a，b
		{
			t=a; 
			a=b;
			b=t;
		}
		for(i=a;i<=b;i++)      
		{
			sum=0;  
			for(j=1;j<i;j++) 
			{
				if(i%j==0) sum+=j;         //找到i的因子
			}
			if(sum==i) d+=1;              //判断因子之和是不是等于本身，等于就加一
		}
		printf("%d\n",d);                  //输出d
	}
}
