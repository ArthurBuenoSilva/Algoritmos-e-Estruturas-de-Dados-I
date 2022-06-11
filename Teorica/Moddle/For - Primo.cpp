include <iostream>

using namespace std;

int main()
{

	//Variáveis
	int n = 0, x = 0;

	//Entrada
	cin >> n;

	//Processamento e Saída
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			x++;
		}
	}

	if(x == 0)
	{
		cout << "primo" << endl;
	}
	else
	{
		cout << "nao e primo" << endl;
	}

	return 0;
}
