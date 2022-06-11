#include <iostream>

using namespace std;

int main()
{

	//Variáveis
	int X, Y;

	//Entrada
	cin >> X >> Y;

	//Processamento e Saída
	if(X % Y == 0)
	{
		cout << "Sim" << endl;
	}
	else
	{
		cout << "Nao" << endl;
	}

	return 0;
}
