#include <iostream>

using namespace std;

int main()
{
	int n = 0; //Número de repetições de cada bit
	int m = 0; //Número de bits
	int v[100]; //Bits

	//Lendo o número de bits e repetições
	cin >> m >> n;

	for(int i = 0; i < m; i++)
	{
		//Lendo os bits
		cin >> v[i];
		for(int j = 0; j < n; j++)
		{
			//Exibindo os bits
			cout << v[i] << " ";
		}
	}

	return 0;
}
