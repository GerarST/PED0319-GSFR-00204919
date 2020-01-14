#include <iostream>
#include <string>
using namespace std;

struct Address{
    int houseNumber;
    string city, state;
};

void printInfo(Address printAd);

int main(){
  Address ad1;

  cout<< "Numero de casa: "; cin >> ad1.houseNumber;
  cout<< "Ciudad: "; cin >> ad1.city;
  cout<< "Departamento: "; cin >> ad1.state;
  
  printInfo(ad1);
}

void printInfo(Address printAd){
    
  cout<< "\nNumero de casa: " << printAd.houseNumber;
  cout<< "\nCiudad: " << printAd.houseNumber;
  cout<< "\nDepartamento: "<< printAd.houseNumber;

}