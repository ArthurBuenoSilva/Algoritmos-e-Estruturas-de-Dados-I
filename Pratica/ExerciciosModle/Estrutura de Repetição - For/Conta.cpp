#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	//Variáveis
	int positivos, x;
	float media;

	//Entrada e Processamento
	for(int i = 0; i < 10; i++)
	{

		cin >> x;

		if(x > 0)
		{
			positivos++;
		}

		media += x;
	}

	//Saída
	cout << fixed << setprecision(2);
	cout << "Positivos = " << positivos << endl;
	cout << "Media = "<< media / 10 << endl;

	return 0;
}