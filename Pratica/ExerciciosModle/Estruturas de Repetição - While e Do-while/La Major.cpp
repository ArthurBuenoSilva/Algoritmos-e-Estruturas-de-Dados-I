#include <iostream>

using namespace std;

int main()
{
	//Vari�veis
	int i = 0, n = 0, ni = 0, m = 0;

	//Entrada
	cin >> n;

	//Processamento
	while(i < n)
	{

		cin >> ni;

		if(ni >= 0)
		{

			if(ni > m)
			{

				m = ni;
			}

			i++;
		}
	}

	//Sa�da
	cout << m << endl;

	return 0;
}
