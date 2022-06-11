#include <iostream>
#include <iomanip>

using namespace std;

//Fun��o que verifica qual o maior n�mero
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

//Fun��o que verifica qual o menor n�mero
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
	int count = 0;			//Vari�vel contadora
	float aux = -1;			//Vari�vel que auxila na leitura dos dados
	float alturas[100];		//Vetor que armazena as alturas das pessoas

	float menorA = 0;		//Vari�vel que armazena a menor altura
	float maiorA = 0;		//Vari�vel que armazena a maior altura

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

	//Chama as fun��es e armazena os retornos
	menorA = menor(alturas, count);
	maiorA = maior(alturas, count);

	//Exibe os dados
	cout << fixed << setprecision(2);
	cout << "Menor altura: " << menorA << endl;
	cout << "Maior altura: " << maiorA << endl;

	return 0;
}
