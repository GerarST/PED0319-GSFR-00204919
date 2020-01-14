#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void Read(int a[], int size2);
int main(){
  
  int size=15;
  int array[size];
  srand(time(NULL));

  for (int i = 0; i < size; i++)
  {
      array[i] = 1+ rand()%75;
  }
  Read(array,size);
  return 0;
}

void Read(int a[], int size2){
   int sum=0;
    for (int i = 0; i < size2; i++) {   
        
        if (a[i]%7==0)
        {
            sum+=i;
        }
        cout<<a[i]<<" ";
    }
           cout<<"\nLa suma de lo valores es de: "<<sum<<endl;
}