#include <iostream>

using namespace std;

int main()
{

	//Variáveis
	int a, b, c, co, temp;

	//Entradas
	cin >> a >> b >> c >> co;

	//Processamento e Saída
	switch(co)
	{
	case 1:
	{

		if(b < a)
		{
			temp = a;
			a = b;
			b = temp;
		}

		if(c < a)
		{
			temp = a;
			a = c;
			c = temp;
		}

		if(c < b)
		{
			temp = b;
			b = c;
			c = temp;
		}

		cout << a << " " << b << " " << c;

		break;
	}
	case 2:
	{

		if(b > a)
		{
			temp = a;
			a = b;
			b = temp;
		}

		if(c > a)
		{
			temp = a;
			a = c;
			c = temp;
		}

		if(c > b)
		{
			temp = b;
			b = c;
			c = temp;
		}

		cout << a << " " << b << " " << c;

		break;
	}
	default:
	{
		cout << "Erro!" << endl;
	}
	}

	return 0;
}
