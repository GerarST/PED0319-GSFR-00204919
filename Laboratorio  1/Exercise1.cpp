#include <iostream>

using namespace std;
int function(int a);

int main(){
    int valor=0;
    int limit=100;
    valor=function(limit);
    cout <<"La suma de todos los numeros primos es de: "<<valor<<endl;
}

int fuction(int a){
    int add=0;
    bool primo=true;
   for (int i = 2; i < a; i++)
   {
       if (a%2==0)
       {
           primo = false;
       }
       else{
           add +=i;
       }      
       
   }
   
   return add;

}