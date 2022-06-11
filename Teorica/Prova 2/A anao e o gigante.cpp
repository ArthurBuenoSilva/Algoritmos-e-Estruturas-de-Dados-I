#include <iostream>
#include <iomanip>

using namespace std;

//Função que verifica qual o maior número
float maior(float alturas[], int nPessoas)
{
	float maiorA = alturas[0];		//Armazena a maior altura

	for(int i = 0; i < nPessoas; i++)
	{
		if(alturas[i] > maiorA)
		{
			maiorA = alturas[i];
		}
	}

	return maiorA;
}

//Função que verifica qual o menor número
float menor(float alturas[], int nPessoas)
{
	float menorA = alturas[0];		//Armazena a menor altura

	for(int i = 0; i < nPessoas; i++)
	{
		if(alturas[i] < menorA)
		{
			menorA = alturas[i];
		}
	}

	return menorA;
}

int main()
{
	int count = 0;			//Variável contadora
	float aux = -1;			//Variável que auxila na leitura dos dados
	float alturas[100];		//Vetor que armazena as alturas das pessoas

	float menorA = 0;		//Variável que armazena a menor altura
	float maiorA = 0;		//Variável que armazena a maior altura

	//Leitura das alturas das pessoas
	while(aux != 0)
	{
		cin >> aux;
		
		if(aux == 0)
		{
			break;
		}
		else
		{
			alturas[count] = aux;
		}

		count++;
	}

	//Chama as funções e armazena os retornos
	menorA = menor(alturas, count);
	maiorA = maior(alturas, count);

	//Exibe os dados
	cout << fixed << setprecision(2);
	cout << "Menor altura: " << menorA << endl;
	cout << "Maior altura: " << maiorA << endl;

	return 0;
}
