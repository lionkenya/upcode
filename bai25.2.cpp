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
    int n=1,m=1,k,A[1000],B[1000],C[1000],kq=2;
    A[0]=1;
    B[0]=1;
    gan(B,C,m);
    k=m;
    while(k<1000)
    {
        conghaiso(C,k,A,n);
        kq++;
        n=m;
        gan(B,A,m);
        m=k;
        gan(C,B,k);

    }
    cout << kq;
    return 0;
}
