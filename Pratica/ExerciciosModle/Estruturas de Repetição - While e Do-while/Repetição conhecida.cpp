#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Vari�veis
	int n = 0, x = 0;
	float s = 0;

	//Entrada
	cin >> n;

	//Processamento
	while(x < n)
	{
		x++;
		s += 1.0 / x;
	}

	//Sa�da
	cout << fixed << setprecision(4);
	cout << s << endl;

	return 0;
}
