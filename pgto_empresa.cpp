#include <iostream>
using namespace std;

int main(void) {
	int num_funcionarios, i=1;
	float salario, valor_folha=0;

	cout << "Digite o numero de funcionarios da empresa: " << endl;
	cin >> num_funcionarios;

	while (i <= num_funcionarios) {
		cout << "Funcionario " << i << ". Qual o salario? " << endl;
		cin >> salario;
		valor_folha += salario;
		i++;
	}
	cout << "Valor da folha de pagamento: R$ " << valor_folha << endl;
	return 0;
}