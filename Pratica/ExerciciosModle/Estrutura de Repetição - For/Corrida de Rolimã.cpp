#include <iostream>

using namespace std;

int main()
{

	//Variáveis
	int n = 0, x = 0, y = 0, indice = 1;

	//Entrada
	cin >> n;
	cin >> x;

	//Processamento e Entrada
	y = x;

	for(int i = 2; i <= n; i++)
	{

		cin >> x;

		if(x < y)
		{
			indice = i;
			y = x;
		}
	}

	//Saída
	cout << indice << endl;

	return 0;
}