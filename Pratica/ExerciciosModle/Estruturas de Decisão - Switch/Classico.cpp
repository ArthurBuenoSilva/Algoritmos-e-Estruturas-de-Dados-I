#include <iostream>

using namespace std;

int main()
{

	//Vari�veis
	int n1, n2;
	char o[2];

	//Entrada
	cin >> n1 >> n2;
	cin.ignore();
	cin >> o[2];

	//Processamento e Sa�da
	switch(o[2])
	{

	case '+':
	{
		cout << n1 + n2 << endl;
		break;
	}
	case '-':
	{
		cout << n1 - n2 << endl;
		break;
	}
	case '/':
	{
		if(n2 != 0)
		{
			cout << n1 / (n2 * 1.0) << endl;
		}
		else
		{
			cout << "Impossivel" << endl;
		}
		break;
	}
	case '*':
	{
		cout << n1*n2 << endl;
		break;
	}
	}

	return 0;
}
