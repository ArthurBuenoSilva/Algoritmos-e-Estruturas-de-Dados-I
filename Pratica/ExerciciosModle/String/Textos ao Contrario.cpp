#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char nome[50];
	char nomeContrario[50];
	int x = 0;

	cin.getline(nome, 50);

	for (int i = strlen(nome) - 1; i >= 0 ; i--)
	{
		nomeContrario[x] = nome[i];
		x++;
	}

	nomeContrario[x++] = '\0';

	cout << nomeContrario << endl;

	return 0;
}