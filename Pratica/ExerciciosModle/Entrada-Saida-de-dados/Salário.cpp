#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//Vari�veis

	char nome[50];
	double s, t, r;

	//Entrada

	cin >> nome;
	cin >> s >> t;

	//Processamento

	r = s + ((t * 15) / 100);

	//Sa�da

	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << r;

	return 0;
}
