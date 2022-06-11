#include <iostream>

using namespace std;

int main()
{

	//Variáveis
	int n, f = 1, np = 0, na = 0, nf = 1;

	//Entrada
	cin >> n;

	//Processamento e Saída
	if(n % 2 == 0)
	{

		for(int i = n; i > 0; i--)
		{
			f = i * f;
		}

		cout << f;
	}
	else
	{
		for(int i = 0; i < n - 2; i++)
		{
			np = na;
			na = nf;

			nf = np + na;
		}

		cout << nf << endl;
	}

	return 0;
}