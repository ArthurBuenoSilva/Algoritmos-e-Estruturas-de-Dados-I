#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	//Vari�veis
	int t, v;
	float l;

	//Entrada

	cin >> t >> v;

	//Processamento

	l = ((t * 1.0) * v) / 12;

	//Sa�da

	cout << fixed << setprecision(3);
	cout << l << " litro(s)";

	return 0;
}
