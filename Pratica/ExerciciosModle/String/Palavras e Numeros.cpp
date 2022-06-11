#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;

	char p1[50];
	char p2[50];
	char p3[50];

	bool isEqual = false;

	cin >> p1;
	cin >> p2;

	for (int i = 0; i < strlen(p1); i++)
	{

		if(p1[i] == p2[i])
		{
			if(isalpha(p1[i]) != 0)
			{
				p3[i - y] = p1[i];
				x++;
			}
			else
			{
				y++;
			}

			isEqual = true;
		}
		else
		{
			isEqual = false;
		}
	}

	p3[x++] = '\0';

	if(isEqual)
	{
		cout << p3 << endl;
	}
	else
	{
		cout << "Nao sao iguais!" << endl;
	}

	return 0;
}