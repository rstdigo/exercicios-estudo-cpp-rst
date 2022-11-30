#include <iostream>

using namespace std;

int main(){

  int matrizOitoPorOito[8][8];
  int i;
  int j;
  int somaElementos;
  int maiorElementos;

  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      matrizOitoPorOito[i][j] = rand() % 63 + 1;
    }
  }
  somaElementos = 0;
  maiorElementos = matrizOitoPorOito[1][1];
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      if ((matrizOitoPorOito[i][j] > maiorElementos) && (i == j) ) {
	maiorElementos = matrizOitoPorOito[i][j];
      }
      if (i + j == 9) {
	somaElementos = somaElementos + matrizOitoPorOito[i][j];
      }
    }
  }
  cout << "o maior valor dos elementos: " << maiorElementos << "\n";
  cout << "a soma dos elementos é: " << somaElementos  << "\n";
  
  return 0;
}
