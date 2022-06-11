#include <iostream>

using namespace std;

int main()
{

	//Variáveis
	char c[2];

	//Entrada
	cin >> c[2];

	//Processamento e Saída
	switch(c[2])
	{
	case 'a':
	{
		cout << "Africa" << endl;
		break;
	}
	case 'b':
	{
		cout << "America" << endl;
		break;
	}
	case 'c':
	{
		cout << "Antartida" << endl;
		break;
	}
	case 'd':
	{
		cout << "Asia" << endl;
		break;
	}
	case 'e':
	{
		cout << "Europe" << endl;
		break;
	}
	case 'f':
	{
		cout << "Oceania" << endl;
		break;
	}
	default:
	{
		cout << "Opcao Invalida!" << endl;
	}
	}

	return 0;
}
