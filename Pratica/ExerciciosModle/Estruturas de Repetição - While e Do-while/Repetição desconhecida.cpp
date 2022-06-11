#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Variáveis
	int x = 0;
	float s = 0, i = 0;

	//Entrada
	cin >> x;

	//Processamento
	while(s < 10000)
	{
		s += (x + i) / (i + 1.0);
		i++;
	}

	//Saída
	cout << fixed << setprecision(2);
	cout << "S = " << s << endl;
	cout << i << " Repetições" << endl;

	return 0;
}