#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//Vari�veis

	int Q1, Q2, D, K = 100;
	float F;

	//Entrada

	cin >> Q1 >> Q2 >> D;

	//Processamento

	F = K * (Q1 * Q2) / pow(D, 2);

	//Sa�da

	cout << fixed << setprecision(2);
	cout << "F = " << F;

	return 0;
}
