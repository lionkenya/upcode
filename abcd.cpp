#include <iostream>

using namespace std;
int conghaiso(int A[],int &n,int B[], int m)
{
        for (int i=0;i<m;i++)
        {
            int tmp=i;
            int s=A[i]+B[i];
            if(s<10)
            {
                A[i]=s;
            }
            else
            {
                A[i]=s%10;
                s=s/10;
                while(1)
                {
                    if(i+1==n)
                    {
                        A[i+1]=s;
                        n=n+1;
                        break;
                    }
                    else if(A[i+1]+s<10)
                    {
                        A[i+1]=A[i+1]+s;
                        break;
                    }
                    else
                    {
                        s=A[i+1]+s;
                        A[i+1]=s%10;
                        s=s/10;
                        i++;
                    }
                }
            }
        i=tmp;
        }

}
int gan(int A[],int B[],int n)
{
    for (int i=0;i<n;i++)
    {
        B[i]=A[i];
    }
}
int main()
{
    int A[500],B[500],n,kq=0;
    A[0]=2;
    n=1;
    for(int i=1;i<1000;i++)
    {
        gan(A,B,n);
        conghaiso(A,n,B,n);
    }

    for(int i=0;i<n;i++)
    {
        kq+=A[i];
    }
    cout << kq;
    return 0;
}
