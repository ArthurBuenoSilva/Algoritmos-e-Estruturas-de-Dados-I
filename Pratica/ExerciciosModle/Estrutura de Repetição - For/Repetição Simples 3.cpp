#include <iostream>

using namespace std;

int main()
{

	//Processamento e Saída
	for(int i = 1; i <= 100; i++)
	{

		if(i % 2 == 0 && i % 3 == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}