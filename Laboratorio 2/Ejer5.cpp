#include <iostream>
#include <string>
using namespace std;

struct Enterprise{
    string name;
    int employees;
};

int main(){
    Enterprise* array;
    int size;

    cout << "Digite cantidad de empersas: "; cin >> size;

    array = new Enterprise[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Nombre:\t"; cin >> array[i].name;
        cout << "Empleados:\t"; cin >> array[i].employees;
    }
    

    return 0;
}