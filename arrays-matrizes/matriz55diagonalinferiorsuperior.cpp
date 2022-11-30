#include <iostream>

using namespace std;

int main (){
  int matrizCincoPorCinco[5][5];
  int diagonalInferior[5];
  int diagonalSuperior[5];
  int i;
  int j;
  
  cout << "gerando valores para a matriz" << "\n";
  for(i = 0; i < 5; i++){	
    for(j = 0; j < 5 ; j++){	
      matrizCincoPorCinco[i][j] = rand() % 25;
      if(i == j){
	diagonalInferior[i] = matrizCincoPorCinco[i][j];
      }
      if(i + j == 4){
	diagonalSuperior[i] = matrizCincoPorCinco[i][j];
      }
    }
  }
  cout << "matriz modificada: " << "\n";
  for(i = 0; i < 5; i++){	
    for(j = 0; j < 5; j++){
      if(i == j){
	matrizCincoPorCinco[i][j] = diagonalSuperior[i];
      }
      if(i + j == 4){
	matrizCincoPorCinco[i][j] = diagonalInferior[i];
      }
      cout << matrizCincoPorCinco[i][j] << "\n";
    }
  }
  
  return 0;
}
