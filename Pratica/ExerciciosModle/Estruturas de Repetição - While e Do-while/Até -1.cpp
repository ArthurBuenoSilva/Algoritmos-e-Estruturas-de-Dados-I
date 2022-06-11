#include <iostream>

using namespace std;

int main()
{
	//Variáveis
	int n = 0, s = 0;

	//Entrada
	cin >> n;

	//Entrada e Processamento
	while(n != -1)
	{
		s += n;

		cin >> n;
	}

	//Saída
	cout << s;

	return 0;
}