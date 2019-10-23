#include <stdio.h>

int main()
{
    long long a[21][21];
    int i,j;
    for (i=0;i<21;i++)
    {
        for (j=0;j<21;j++)
        {
     		a[i][j]=1;
		}
	}
	for(i=1;i<21;i++)
        for( j=1;j<21;j++)
        {
            a[i][j]= a[i-1][j] + a[i][j-1];
        }
    printf("%lli",a[20][20]);
    return 0;
}
