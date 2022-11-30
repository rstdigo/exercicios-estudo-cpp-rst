#include <iostream>

using namespace std;

int main(){

  int matrizUm[50][2];
  int matrizAreaTriangulo[50];
  int i;
  int j;

  for (i = 0; i < 50; i++) {
    for (j = 0; j < 2; j++) {
      matrizUm[i][j] = rand() % 99 + 1;
    }
  }
  for (i = 0; i < 50; i++) {
    matrizAreaTriangulo[i] = (matrizUm[i][1] * matrizUm[i][2]) / 2;
    cout << "área dos triângulos: " <<matrizAreaTriangulo[i]  << "\n";
  }
  
  return 0;
}
