#include <iostream>
#include <cmath>
using namespace std;

int fun1(int a);
bool fun2(int num);

int main(){
    int value=0;
    int limit=100;
    value=fun1(limit);
    cout <<"\nLa suma de todos los numeros primos es de: "<<value<<"\n"<<endl;
}

int fun1(int a){
    int add=0;
   for (int i = 2; i < a; i++)
   {
       if (fun2(i) == true)
       {
           add+=i;
       }    
   }
   return add;
}

bool fun2(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}