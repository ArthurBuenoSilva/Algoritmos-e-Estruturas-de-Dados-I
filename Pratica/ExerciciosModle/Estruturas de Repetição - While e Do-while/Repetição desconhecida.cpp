#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Vari�veis
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

	//Sa�da
	cout << fixed << setprecision(2);
	cout << "S = " << s << endl;
	cout << i << " Repeti��es" << endl;

	return 0;
}