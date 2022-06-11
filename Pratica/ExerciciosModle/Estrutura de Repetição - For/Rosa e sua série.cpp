#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	//Variáveis
	int n = 0, x = 0;
	float soma = 0;

	//Entrada
	cin >> n >>  x;

	//Processamento
	for(int i = 1; i <= n; i++)
	{

		if(i % 2 == 0)
		{
			soma = soma - ((n - i - 1.0) * pow(x, i * 1.0)) / i ;
			cout << soma;
		}
		else
		{
			soma = soma + ((n - i - 1.0) * pow(x, i * 1.0)) / i ;
		}

		cout << i;
	}

	//Saída
	cout << fixed << setprecision(4);
	cout << soma << endl;

	return 0;
}
