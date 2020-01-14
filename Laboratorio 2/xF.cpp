#include <iostream>
using namespace std;

int main(){
  int matriz[3][3], aux=1;

  for (int i = 0; i < 20; i++)
  {
      for (int j = 0; j < 3; j++)
      {
          matriz[i][j] = aux++;
      }
      
  }

  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 3; j++)
      {
          cout << matriz[i][j] << "\t";
      }
      cout << "\n";
  }
   return 0;
}