#include <iostream>

using namespace std;

int main(){

  int matrizUm[10][10];
  int matrizDois[10][10];
  int i;
  int j;
  int diagonalSuperior[10];
  int diagonalInferior[10];

  cout << "gerar valores para primeira matriz" << "\n";
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      matrizUm[i][j] = rand() % 99 + 1;
      if (i + j == 9) {
	diagonalInferior[i] = matrizUm[i][j];
      }
    }
  }
  cout << "gerar valores para segunda matriz" << "\n";
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      matrizDois[i][j] = rand() % 99 + 1;
      if (i == j) {
	diagonalSuperior[i] = matrizDois[i][j];
      }
    }
  }
  cout << "resultado para a primeira matriz" << "\n";
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (i == j) {
	matrizUm[i][j] = diagonalSuperior[i];
      }
      cout << matrizUm[i][j] << "\n";
    }
  }
  cout << "resultado para a segunda matriz" << "\n";
  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (i + j == 9) {
	matrizDois[i][j] = diagonalInferior[i];
      }
      cout << matrizDois[i][j] << "\n";
    }
  }
  
  return 0;
}
