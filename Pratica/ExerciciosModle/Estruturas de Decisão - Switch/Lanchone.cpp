#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	//Variáveis
	int c, q;

	//Entrada
	cin >> c >> q;

	//Processamento e Saída
	cout << fixed << setprecision(2);

	switch(c)
	{
	case 1:
	{
		cout << "Total: R$ " << q * 3.00 << endl;
		break;
	}
	case 2:
	{
		cout << "Total: R$ " << q * 5.50 << endl;
		break;
	}
	case 3:
	{
		cout << "Total: R$ " << q * 6.00 << endl;
		break;
	}
	case 4:
	{
		cout << "Total: R$ " << q * 3.00 << endl;
		break;
	}
	case 5:
	{
		cout << "Total: R$ " << q * 2.50 << endl;
		break;
	}
	}

	return 0;
}
