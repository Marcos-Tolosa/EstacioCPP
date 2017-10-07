#include <iostream>
using namespace std;

int main(void) {
	float provas[2][10];
	float medias[10];
	float media=0, soma=0;
	float valor_prova;

	for(int alunos=1; alunos<=10; alunos++){
		cout << "Aluno " << alunos << endl;
		for(int prova=1; prova<=2; prova++){
			cout << "Digite o valor da prova: " << prova << ": ";
			cin >> valor_prova;
			soma = soma+valor_prova;
		}
		media = soma/2;
		medias[alunos-1] = media;
		media = 0;
		soma = 0;
	}

	for(int i=0; i<=9; i++){
		cout << "Media do aluno: " << i << " = " << medias[i] << endl;
		medias[i] = 0; 
	}
}