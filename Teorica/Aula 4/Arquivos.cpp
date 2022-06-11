#include <iostream>
#include <fstream>	//Biblioteca para trabalhar com arquivos

using namespace std;

int main()
{

	ifstream arq; //handle para leitura
	char nomeArq[50];
	int x[10];
	int i = 0;

	cin.getline(nomeArq, 50);
	
	arq.open(nomeArq, ifstream::in);

	while(!arq.eof())
	{
		arq >> x[i];
		i++;
	}
	
	for(int j = 0; j < i; j++)
	{
		cout << "x = " << x[j] << endl;
	}	

	arq.close();

	return 0;
}
