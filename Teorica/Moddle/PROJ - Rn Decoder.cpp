#include <iostream>

using namespace std;

int main()
{
	int n = 0; //N�mero de repeti��es de cada bit
	int v1[100]; //Armazena os bits
	int v2[100]; //Armazena os bits para verificar
	int x = 0; //Vari�vel auxiliar, ind�ce do vetor v2
	int v = 0; //Vari�vel auxiliar, verdadeiro
	int f = 0; //Vari�vel auxiliar, falso

	//Lendo o n�mero de repeti��es
	cin >> n;

	for(int i = 0; i < n * n; i++)
	{
		//Lendo os bits
		cin >> v1[i];

		x++;


		if(x != n)
		{
			//Armazena os bits no vetor
			v2[x - 1] = v1[i];
		}
		else
		{
			//Armazena os bits no vetor
			v2[x - 1] = v1[i];

			//Verifica o valor dos bits
			for(int j = 0; j < x; j++)
			{
				if(v2[j] == 0)
				{
					v++;
				}
				else
				{
					f++;
				}
			}

			//Exibe os bits corrigidos
			if(v > f)
			{
				cout << "0 ";
			}
			else
			{
				cout << "1 ";
			}

			//Zera as vari�veis para a pr�xima verifica��o
			x = 0;
			v = 0;
			f = 0;
		}
	}

	return 0;
}
