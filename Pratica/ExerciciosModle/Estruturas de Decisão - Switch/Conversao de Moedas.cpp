#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	//Variáveis
	float p;
	int c;

	//Entrada
	cin >> p >> c;

	cout << fixed << setprecision(2);

	//Processamento e Saída
	switch (c)
	{
	case 1:
	{
		cout << "R$ " << p * 3.86 << endl;
		break;
	}
	case 2:
	{
		cout << "R$ " << p * 3.77 << endl;
		break;
	}
	case 3:
	{
		cout << "R$ " << p * 4.41 << endl;
		break;
	}
	case 4:
	{
		cout << "R$ " << p * 0.19 << endl;
		break;
	}
	case 5:
	{
		cout << "R$ " << p * 5.00 << endl;
		break;
	}
	default:
	{
		cout << "Codigo Invalido!" << endl;
		break;
	}
	}

	return 0;
}
