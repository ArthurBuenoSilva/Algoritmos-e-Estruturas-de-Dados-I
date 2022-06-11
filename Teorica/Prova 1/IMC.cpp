#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

	int n = 0;						//N�mero de pessoas
	float p = 0;					//Peso de cada pessoa
	float h = 0;					//Altura de cada pessoa
	float imc = 0;					//IMC de cada pessoa
	float imcMedio = 0;				//IMC m�dio de todas as pessoas
	float menorImc = 10000;			//Menor IMC de todas as pessoas
	float maiorImc = 0;				//Maior IMC de todas as pessoas

	//L� o n�mero de pessoas
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		//L� o peso e altura de cada pessoa
		cin >> p;
		cin >> h;

		//Faz o calculo do IMC
		imc = p / pow(h, 2);

		//Calcula o IMC m�dio
		imcMedio += imc;

		//Verifica se o maior e menor IMC
		if(imc > maiorImc)
		{
			maiorImc = imc;
		}

		if(imc < menorImc)
		{
			menorImc = imc;
		}
	}

	//Exibe os resultados
	cout << fixed << setprecision(1);
	cout << "Menor IMC: " << menorImc << endl;
	cout << "Maior IMC: " << maiorImc << endl;
	cout << "IMC medio: " << imcMedio / n << endl;

	return 0;
}