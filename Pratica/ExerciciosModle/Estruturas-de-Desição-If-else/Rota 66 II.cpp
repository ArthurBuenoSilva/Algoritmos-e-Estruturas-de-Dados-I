#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	//Vari�veis
	float i, m, o, n, a, ne, t;
	float x;

	//Entradas
	cin >> i >> m >> o >> n >> a >> ne >> t;

	//Processamento e Sa�da
	x = i + m + o + n + a + ne;

	cout << fixed << setprecision(2);

	if(x > t)
	{
		cout << "Deve: R$ " << x - t << endl;
	}
	else
	{
		cout << "Sobrou: R$ " << t - x << endl;
	}

	return 0;
}
