#include <iostream>

using namespace std;


int main (){

  int matrizDezPorDez[10][10];
  int maiorValor=0;
  int i; //linha
  int j; //coluna


  for (i=0;i<10;i++){
    for (j=0;j<10;j++){
      cout << i << " <- linha  e coluna -> " << j << "\n ";
      cin >> matrizDezPorDez[i][j];  
      if (matrizDezPorDez[i][j] > maiorValor)
	{
	  maiorValor = matrizDezPorDez[i][j];
	}
    }
  }
  for (i=0;i<10;i++){
    for ( j=0;j<10;j++){
      if(maiorValor == matrizDezPorDez[i][j])
	{
	  cout << "maior valor: " << maiorValor << " na linha: " << i << " e na coluna: " << j << "\n ";
	}
    }
  }    

  return 0;
}




