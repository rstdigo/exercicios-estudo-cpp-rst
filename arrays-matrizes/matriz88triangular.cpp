#include <iostream>

using namespace std;

int main(){

  int matrizOitoPorOito[8][8];
  int i;
  int j;

  cout << "digite valores inteiros para a matriz: " << "\n";
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      matrizOitoPorOito[i][j] = rand() % 63 + 1;
    }
  }
  for (j = 0; j < 8; j++) {
    if (i < j) {
      matrizOitoPorOito[i][j] = 0;
    }
  }
  cout << "resultado da modificação da matriz: " << "\n";
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      cout << matrizOitoPorOito[i][j] << "\n";
    }
  }
  
  return 0;
}
