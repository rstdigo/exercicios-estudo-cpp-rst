#include <iostream>
#define MAX 9

using namespace std;

int main(){

  int valor[MAX] = {5,7,6,9,2,8,4,0,3};
  int i;
  int indice = 1;

  for (i = 0; i < MAX; i++) {
    cout << valor[indice - 1] << "\n";
    indice = valor[indice - 1];
  }

  return 0;
}
