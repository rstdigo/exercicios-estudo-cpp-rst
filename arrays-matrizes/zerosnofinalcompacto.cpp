#include <iostream>

using namespace std;

void reordenar(int arranjo[], int tamanho){

  int indexador = 0;

  for (int i = 0; i < tamanho; i++) {
    if (arranjo[i] != 0) {
      arranjo[indexador++] = arranjo[i];
    }    
  }
  for (int i = indexador; i < tamanho; i++) {
    arranjo[i] = 0;
  }
}

int main(){

  int arranjo[50] = {0};
  int tamanho = sizeof(arranjo) / sizeof(arranjo[0]);

  for (int i = 0; i < tamanho; i++) {
    cout << "digite os valores do arranjo: " << "\n";
    cin >> arranjo[i];
  }
  cout << "o arranjo ordenado: " << "\n";
  reordenar(arranjo, tamanho);
  for (int i = 0; i < tamanho; i++) {
    cout << arranjo[i] << "\n";
  }
  
  return 0;
}

