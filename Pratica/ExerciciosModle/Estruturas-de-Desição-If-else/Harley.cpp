#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{

	//Variáveis

	int m1, m2, m3;
	float v1, v2, v3;
	int x;

	//Entradas

	cin >> m1 >> m2 >> m3;

	//Processamento

	v1 = (10 * m1) - ((4 / 3) * m1);
	v2 = (10 * m2) - ((4 / 3) * m2);
	v3 = (10 * m3) - ((4 / 3) * m3);

	if(v1 > v2)
	{
		x = 1;

		if(v1 > v3)
		{
			x = 1;
		}
		else
		{
			x = 3;

			if(v3 > v2)
			{
				x = 3;
			}
				else
			{
				x = 2;
			}
		}
	}
	else
	{
		x = 2;

		if(v2 > v3)
		{
			x = 2;
		}
		else
		{
			x = 3;

			if(v3 > v1)
			{
				x = 3;
			}
			else
			{
				x = 1;
			}
		}
	}
	
	//Saída

	if(x == 1)
	{
		cout << "Moto 1" << endl;
	}
	else if(x == 2)
	{
		cout << "Moto 2" << endl;
	}
	else
	{
		cout << "Moto 3" << endl;
	}

	return 0;
}
