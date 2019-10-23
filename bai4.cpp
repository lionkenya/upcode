#include <stdio.h>

int main()
{
	int i,j,a,tmp,c,max=0;
	for (i=999;i>=100;i--)
	{
		for (j=999;j>=100;j--)
		{
			int b=0;
			c=a=i*j;
			while (a>0)
			{
				tmp=a%10;
				b=b*10+tmp;
				a=a/10;
			}
			if (c==b)
			{
				if (c>max) max=c;
				
			}
		}
	}
	printf ("%d",max);
}
