#include <iostream>

using namespace std;

int main()
{

	//Vari�veis
	int p, j1, m2, r, a;
	int x;

	//Entradas
	cin >> p >> j1 >> m2 >> r >> a;

	//Processamento e Sa�da
	if(r == 0)
	{
		if(a == 0)
		{

			if((j1 + m2) % 2 == 0 && r == 0)
			{
				cout << "Joao ganha!" << endl;
			}
			else if((j1 + m2) % 2 == 0 && r == 1)
			{
				cout << "Maria ganha!" << endl;
			}
			else if((j1 + m2) % 2 == 1 && r == 0)
			{
				cout << "Maria ganha!" << endl;
			}
			else if((j1 + m2) % 2 == 1 && r == 1)
			{
				cout << "Joao ganha!" << endl;
			}

		}
		else
		{
			cout << "Maria ganha!" << endl;
		}
	}
	else
	{
		if(a == 0)
		{
			cout << "Joao ganha!" << endl;
		}
		else
		{
			cout << "Maria ganha!" << endl;
		}
	}

	return 0;
}
