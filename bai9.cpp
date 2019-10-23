#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,n,s;
	float c;
	for (a=1;a<1000;a++)
	{
		for (b=1;b<1000;b++)
		{
			c=sqrt(pow(a,2)+pow(b,2));
			if (a+b+c==1000) 
			{
			s=a*b*c;break;}
		}
	}
	printf ("%d",s);
}
