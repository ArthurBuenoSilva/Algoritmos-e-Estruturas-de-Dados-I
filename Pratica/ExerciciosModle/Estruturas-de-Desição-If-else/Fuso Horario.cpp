#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{

	//Variáveis

	int S, T, F, L;

	//Entradas

	cin >> S >> T >> F;

	//Processamento

	if(S + T >= 24)
	{
		L = (S + T + F) - 24;
	}
	else
	{
		if(S + T + F < 0)
		{
			L = (S + T + F) + 24;
		}
		else
		{
			L = S + T + F;
		}
	}

	//Saída

	cout << L << endl;

	return 0;
}
