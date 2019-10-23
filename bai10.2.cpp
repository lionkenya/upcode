#include <iostream>
#include <string>

using namespace std;

bool is_prime(int x){

    for (int i = 2; i * i <= x; i++){

        if (x % i == 0){

            return false;

        }

    }

    return true;

}

int main(){

    int num = 2;
    long long int sum_primes = 0;

    while (num <= 2000000){

        if (is_prime(num)){

            sum_primes += num;

        }

        num += 1;

    }

    cout << sum_primes;

}
