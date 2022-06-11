#include <iostream>

using namespace std;

int main()
{
	int n = 0; //Número de repetições de cada bit
	int v1[100]; //Armazena os bits
	int v2[100]; //Armazena os bits para verificar
	int x = 0; //Variável auxiliar, indíce do vetor v2
	int v = 0; //Variável auxiliar, verdadeiro
	int f = 0; //Variável auxiliar, falso

	//Lendo o número de repetições
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

			//Zera as variáveis para a próxima verificação
			x = 0;
			v = 0;
			f = 0;
		}
	}

	return 0;
}
