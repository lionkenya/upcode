#include <stdio.h>

int main()
{
	int i=1,a[100],m=0;
	while (i<10)
	{
		if ((i%3==0)||(i%5==0)) { 
		a[m]=i;
			printf (" %d",a[m]);
		}m++;i++;}
	int sum=0;
	sum+=a[1]+a[2];
	printf ("sum=%d",sum);
		
		
}
