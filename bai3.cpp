#include <stdio.h>
int main()
{
    int n,i,j,dem=0,a=0,m[100];
    printf("\n Nhap n: ");
    scanf("%d", &n);
    for (i=2;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            if(i%j==0)
                dem++;
        }
        if(dem==2)
        {
		    i=m[a];
		    a++;
        }
		dem=0;
    }
    printf ("\n%d",m[a]);
	}
