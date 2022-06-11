#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//Vari·veis

	char nome[50];
	int x;
	float r;

	//Entrada

	cin.getline(nome, 50);
	cin >> x;

	//Processamento

	r = x * (34.90 / 12);

	//Sa√≠da

	cout << nome << endl;
	cout << fixed << setprecision(2);
	cout << "R$: " << r;

	return 0;
}
