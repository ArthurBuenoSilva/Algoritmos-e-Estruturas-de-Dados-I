#include <iostream>
#include <fstream>

using namespace std;

struct Paises
{

	char nome[50];
	int ouro;
	int prata;
	int bronze;
};

int main()
{

	ifstream arq;
	Paises pais[5];
	
	int i = 0;
	int mOuro = -1;
	int mIndex = 0;
	int qMedalhas = 0;

	arq.open("olimpiadas.txt", ifstream::in);

	while(!arq.eof())
	{
	    
		arq >> pais[i].nome;
		arq >> pais[i].ouro;
		arq >> pais[i].prata;
		arq >> pais[i].bronze;

		if(pais[i].ouro > mOuro)
		{
			mOuro = pais[i].ouro;
			mIndex = i;
		}
	    i++;

	}
	
	arq.close();

	cout << pais[mIndex].nome << endl;
	cout << pais[mIndex].ouro << " medalhas de ouro" << endl;
	qMedalhas = pais[mIndex].ouro + pais[mIndex].prata + pais[mIndex].bronze;
	cout << qMedalhas << " medalhas" << endl;

	return 0;
}