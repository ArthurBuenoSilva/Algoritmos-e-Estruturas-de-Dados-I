#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Vari�veis
	int n = 0;
	float h = 0;

	//Entrada
	cin >> n;

	//Processamento
	for(int i = 1; i <= n; i++)
	{
		h = h + (1.0 / i);
	}

	//Sa�da
	cout << fixed << setprecision(4);
	cout << h << endl;

	return 0;
}
