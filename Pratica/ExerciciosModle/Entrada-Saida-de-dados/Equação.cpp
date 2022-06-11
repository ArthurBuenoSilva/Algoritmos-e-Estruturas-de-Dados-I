#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//Variáveis

	int x;
	float s;

	//Entrada

	cin >> x;

	//Processamento

	s = (pow(x, 3) - pow(x, 2)) * sqrt(x);

	//Saída

	cout << fixed << setprecision(2);
	cout << s;

	return 0;
}
