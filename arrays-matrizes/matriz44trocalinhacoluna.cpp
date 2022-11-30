#include <iostream>

using namespace std;

int main(){

  int matrizQuatroPorQuatro[4][4];
  int i;
  int j;
  int auxiliar;

  cout << "digite os valores inteiros para matriz: " << "\n";
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      cin >> matrizQuatroPorQuatro[i][j];
    }
  }
  for (i = 0; i < 4; i++) {
    auxiliar = matrizQuatroPorQuatro[1][i];
    matrizQuatroPorQuatro[1][i] = matrizQuatroPorQuatro[i][4];
    matrizQuatroPorQuatro[i][4] = auxiliar;
  }
  cout << "a matriz resultante da troca dos valores da linha é " << "\n";
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      cout << matrizQuatroPorQuatro[i][j] << "\n";
    }
  }
  
  return 0;
}
