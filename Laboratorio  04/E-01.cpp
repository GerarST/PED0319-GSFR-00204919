#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);
int addPrime(int start, int primeQ, int aux);

int main(){
    int n = 0;
    cin >> n;

    cout << addPrime(2, n, 0) << endl;

    return 0;
}

bool isPrime(int n){
    if (n == 2)
        return 0;
    else{
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

int addPrime(int start, int primeQ, int aux){
    if (aux == primeQ)
    {
        return 0;
    }
    else{
        if (isPrime(start) == true)
        {
            return start + addPrime(start + 1, primeQ, aux + 1);
        }
        else{
            return 0 + addPrime(start +1, primeQ, aux);
        }
    }
}