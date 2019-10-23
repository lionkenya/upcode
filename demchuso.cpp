#include<iostream>
using namespace std;
int main(){
    int n=1;
  
    int dem=0;
    while(n!=0)
	{
        n/=10; // hay n = n /10;
        dem++;
    }
    cout<<"So luong chu so cua so nguyen la: "<<dem<<endl;
    
}
