#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Variáveis
	int x = 0, c = 0;
	float m = 0;

	//Entrada e Processamento
	while(x >= 0)
	{
		cin >> x;

		if(x >= 0)
		{
			m += x;
			c++;
		}
	}

	m = m / c;

	//Saída
	cout << fixed << setprecision(2);
	cout << m << endl;

	return 0;
}
