#include <iostream>

using namespace std;

int main()
{
	int n = 0; //N�mero de repeti��es de cada bit
	int m = 0; //N�mero de bits
	int v[100]; //Bits

	//Lendo o n�mero de bits e repeti��es
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
