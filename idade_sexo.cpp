#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {
	char sexo;
	int idade;

	cout << "Qual seu sexo? (M/F)" << endl;
	cin >> sexo;
	cout << "Qual sua idade? " << endl; 
	cin >> idade;

	cout << "Voce tem " << idade << " anos." << endl;
	cout << "E teu sexo eh: " << sexo << endl;

	//system("PAUSE"); 
}