#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//Vari�veis

	int idade;
	float indice;
	char nome[50];

	//Entrada

	cin >> idade;
	cin.ignore();
	cin.getline(nome, 50);

	//Processamento

	indice = idade * (1.0 / 42) - (idade - 3);

	//Sa�da

	cout << fixed << setprecision(4);
	cout << "Ind = " << indice;

	return 0;
}
