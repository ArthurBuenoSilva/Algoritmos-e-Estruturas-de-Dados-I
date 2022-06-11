#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

	//Vari�veis
	char c[2];
	int X, Y;

	//Entrada
	cin >> c[2];
	cin >> X >> Y;

	//Processamento e Sa�da
	cout << fixed << setprecision(1);

	switch(c[2])
	{
	case '+':
	{
		cout << pow(Y, 2.00) + 2.00 << endl;
		break;
	}
	case '-':
	{
		cout << X - Y << endl;
		break;
	}
	case '*':
	{
		cout << 2.00 * (X - Y) << endl;
		break;
	}
	case '/':
	{
		cout << X / 5.00 << endl;
		break;
	}
	}

	return 0;
}
