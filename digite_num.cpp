#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n1, n2;

  cout << "Digite um numero qualquer: " << endl;
  cin >> n1;

  cout << "Digite outro numero: " << endl;
  cin >> n2;

  if (n1 > 0) {
    cout << "O numero 1 eh positivo." << endl;
  }
  if (n1 < 0) {
    cout << "O numero 1 eh negativo" << endl;
  }

  cout << "Numero 1 + Numero 2 = " << n1+n2 << endl;

  if ((n1+n2) > 0){
  cout << "O resultado da soma do numeros eh positivo"<<endl;
}
  if ((n1+n2) < 0){
    cout<< "o resultado da soma dos numero eh negativo"<<endl;
  }
  
  return 0;
}
