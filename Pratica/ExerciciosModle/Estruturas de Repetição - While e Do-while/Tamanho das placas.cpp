#include <iostream>

using namespace std;

int main()
{
	//Variáveis
	int x = 0, y = 0, m = 0, i = 0;
	int xi = 0, yi = 0;

	//Entrada
	cin >> x >> y >> m;

	//Entrada, Processamento e Saída
	while(i < m)
	{
		cin >> xi >> yi;

		if(xi <= x)
		{
			if(yi <= y)
			{
				cout << "Sim" << endl;
			}
			else
			{
				cout << "Nao" << endl;
			}
		}
		else
		{
			if(yi <= x)
			{
				if(xi <= y)
				{
					cout << "Sim" << endl;
				}
				else
				{
					cout << "Nao" << endl;
				}
			}
			else
			{
				cout << "Nao" << endl;
			}
		}

		i++;
	}

	return 0;
}