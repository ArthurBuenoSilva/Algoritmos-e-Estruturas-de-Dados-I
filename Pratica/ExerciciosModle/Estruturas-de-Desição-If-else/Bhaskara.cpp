#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{

	//Variáveis

	double a, b, c, delta, x1, x2;

	//Entradas

	cin >> a >> b >> c;

	//Processamento e Saída
	
	cout<<fixed<<setprecision(5);

	if(a == 0)
	{
		cout << "Impossivel" << endl;
	}
	else
	{
		delta = pow(b, 2) - 4 * (a * c);

		if(delta < 0)
		{
			cout << "Impossivel" << endl;
		}
		else
		{
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);

			cout << "X1 = " << x1 << endl;
			cout << "X2 = " << x2 << endl;
		}
	}

	return 0;
}
