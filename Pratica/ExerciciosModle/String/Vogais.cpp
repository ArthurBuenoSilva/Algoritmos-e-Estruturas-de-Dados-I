#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char texto[50];
	char vogais[] = {'a', 'e', 'i', 'o', 'u'};
	int qtdVogais = 0;

	cin.getline(texto, 50);

	for (int i = 0; i < strlen(vogais); i++)
	{

		for (int j = 0; j < strlen(texto); j++)
		{

			if(vogais[i] == texto[j])
			{
				texto[j] = toupper(texto[j]);
				qtdVogais++;
			}
		}
	}

	cout << texto << endl;
	cout << qtdVogais << endl;

	return 0;
}
