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
		if(a>b)                 //��a>bʱ������a��b
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
				if(i%j==0) sum+=j;         //�ҵ�i������
			}
			if(sum==i) d+=1;              //�ж�����֮���ǲ��ǵ��ڱ������ھͼ�һ
		}
		printf("%d\n",d);                  //���d
	}
}
