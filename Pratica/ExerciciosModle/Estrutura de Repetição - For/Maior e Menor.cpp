#include <iostream>

using namespace std;

int main()
{

	//Vari�veis
	int n, x, maior = 0, menor = 0;

	//Entrada
	cin >> n;
	cin >> x;
	
	maior = x;
	menor = x;

	//Processamento e Entrada
	for(int i = 0; i < n - 1; i++)
	{

		cin >> x;

		if(x >= maior)
		{
			maior = x;
		}
		else if(x < menor)
		{
			menor = x;
		}
	}

	//Sa�da
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;

	return 0;
}