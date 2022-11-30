#include <iostream>

using namespace std;

int main(){

  int matrizUm[4][4];
  int matrizDois[4][4];
  int matrizMaior[4][4];
  int i;
  int j;

  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      cout << "digite os valores para a primeira matriz: " << "\n";
      cin >> matrizUm[i][j];
    }
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      cout << "digite os valores para a segunda matriz: " << "\n";
      cin >> matrizDois[i][j];
    }
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      if (matrizUm[i][j] > matrizDois[i][j]) {
	matrizMaior[i][j] = matrizUm[i][j];
      }
      else
	matrizMaior[i][j] = matrizDois[i][j];
    }
  }
  cout << "os maiores valores entre as duas matrizes são: " << "\n";
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      cout << matrizMaior[i][j] << "\n";
    }
  }
  
  return 0;
}
