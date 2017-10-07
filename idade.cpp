#include <iostream>
using namespace std;

int main(void) {
  int idade;
  char sexo;

  cout << "Qual sua idade?" << endl;
  cin >> idade;

  cout << "Digite 'm' para (Masculino) ou 'f' para (Feminino)" << endl;
  cin >> sexo;

  if (idade >= 18) {
    cout << "Voce ja pode dirigir..." << endl;

    if (sexo == 'm') {
      cout << "Voce precisa ir no servico militar tbm." << endl;
    }
  }
  else {
    if (idade > 16) {
      cout << "Voce ja pode votar." << endl;
    }
    else {
      cout << "Voce nao pode votar e nem dirigir ainda! =/" << endl;
    }
  }
  return 0;
}
