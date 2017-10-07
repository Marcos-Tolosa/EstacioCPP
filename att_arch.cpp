#include <iostream>
using namespace std;

int main(void) {
	char escolha;

	cout << "O sistema sera atulizado... Digite sua senha!" << endl;
	system("sudo pacman -Syu --color=auto");
}