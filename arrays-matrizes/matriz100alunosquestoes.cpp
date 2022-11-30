#include <iostream>

using namespace std;

int main(){

  char alunosQuestoes[3][10];
  char gabarito[10] = {'a','a','b','d','c','a','b','c','c','d',};
  int corretos[3];
  int i;
  int j;
  char nota;

  for (i = 0; i < 3; i++) {
    corretos[i] = 0;
    for (j = 0; j < 10; j++) {
      cout << "informe sua resposta da questão: " << j << "\n";
      cin >> nota;
      alunosQuestoes[i][j] = nota;
      if (alunosQuestoes[i][j] == gabarito[j]) {
	corretos[i] = corretos[i] + 1;
      }
    }
  }
  for (i = 0; i < 3; i++) {
    cout << "o aluno " << i << " acertou " << corretos[i] << "\n";
  }
  
  return 0;
}

