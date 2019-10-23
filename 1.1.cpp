#include <stdio.h>

int main()
{
	int i=1,a[200],m=1,j=1,b[200],n=1,sum1=0,sum2=0;
	for (i=1;i<10;i++)
	{
		if (i%3==0) { 
		a[m]=i;
		printf ("%d ",a[m])	;
		}m++;}
		for (j=1;j<10;j++)
		{
			if (j%5==0)
			{
				a[n]=j;
				printf (" %d",a[n]);
			}
			n++;
		}
		for (i=1;i<=m;i++){
			sum1+=a[i];printf("%d",sum1);
		}
		for (j=1;j<=n;j++){
			sum2+=b[j];
}
printf ("%d",sum1+sum2);
}
		

