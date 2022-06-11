#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{

	//Variáveis

	int x, y;
	float resultado;

	//Entradas

	cin >> x >> y;

	//Processamento

	if(x < y)
	{
		resultado = (x + (2.0 * y)) / (3.0 + x);
		resultado = pow(resultado, 1.0/3.0);
	}
	else if(x == y)
	{
		resultado = pow(x, 3) - (x * y) + sqrt(y);
	}
	else if(x > y)
	{
		resultado = -x + sqrt(((pow(x, 2) - (4 * y)) / (2 * y)));
	}

	//Saída

	cout << fixed << setprecision(2);
	cout << resultado << endl;

	return 0;
}
