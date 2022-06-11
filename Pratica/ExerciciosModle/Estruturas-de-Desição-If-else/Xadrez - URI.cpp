#include<iostream>

using namespace std;

int main()
{

	//Variáveis
	int L, C;

	//Entrada
	cin >> L >> C;

	//Processamento e Saída
	if(L % 2 == 0 && C % 2 == 0)
	{
		cout << "1" << endl;
	}
	else if(L % 2 == 0 && C % 2 != 0)
	{
		cout << "0" << endl;
	}
	else if(L % 2 != 0 && C % 2 == 0)
	{
		cout << "0" << endl;
	}
	else if(L % 2 != 0 && C % 2 != 0)
	{
		cout << "1" << endl;
	}

	return 0;
}
