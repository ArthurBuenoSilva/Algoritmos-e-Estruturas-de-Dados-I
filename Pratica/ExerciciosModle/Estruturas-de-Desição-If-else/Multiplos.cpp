#include <iostream>

using namespace std;

int main()
{

	//Vari�veis
	int X, Y;

	//Entrada
	cin >> X >> Y;

	//Processamento e Sa�da
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
