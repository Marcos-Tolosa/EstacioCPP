#include <iostream>
using namespace std;

int main(void) {
	float sal1, sal2, sal3, sal4;
	float media;

	cout << "Digite o salario de 4 meses:" << endl;
	cout << "Primeiro salario: ";
	cin >> sal1; system("clear");
	cout << "Segundo salario: ";
	cin >> sal2; system("clear");
	cout << "Terceiro salario: ";
	cin >> sal3; system("clear");
	cout << "Quarto salario: ";
	cin >> sal4; system("clear");
	media = (sal1+sal2+sal3+sal4)/4;

	cout << "A media de salario nesse periodo foi de " << media << " reais." << endl;
}