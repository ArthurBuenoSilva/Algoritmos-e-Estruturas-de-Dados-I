#include <iostream>

using namespace std;

int main()
{

	//Variáveis
	int n;
	int np = 0, na = 0, nf = 1;

	//Entrada
	cin >> n;

	//Processamento e Saída
	if(n == 2)
	{
		cout << "0 1 ";
	}
	else
	{
		cout << "0 1 ";

		for(int i = 0; i < n - 2; i++)
		{
			np = na;
			na = nf;

			nf = np + na;
			cout << nf << " ";
		}
	}

	return 0;
}
