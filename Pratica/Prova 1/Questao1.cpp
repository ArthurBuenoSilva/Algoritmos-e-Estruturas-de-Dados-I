#include <iostream>

using namespace std;

int main()
{
	//Variáveis
	int n = 0;          //Número de alunos
	int nota = 0;       //Nota dos alunos
	char nome[50];      //Nome dos alunos

	//Lê o número de alunos
	cin >> n;

	//Lê a nota até ter um valor válido
	while(n < 0)
	{
		cin >> n;
	}

	for(int i = 0; i < n; i++)
	{
		//Lê a nota e o nome do aluno
		cin >> nota;
		cin.ignore();
		cin.getline(nome, 50);

		//Verifica se o aluno foi aprovado, NP3 ou reprovado
		if(nota >= 60)
		{
			cout << "Aprovado" << endl;
		}
		else if(nota >= 30)
		{
			cout << "Fazer NP3" << endl;
		}
		else
		{
			cout << "Reprovado" << endl;
		}
	}

	return 0;
}