#include<iostream>
#include<iomanip>
#include<cstring>
#include<fstream>

using namespace std;

//Struct que representa cada processo
struct Processo
{
	char nome[100];
	int tExecucao;
	int prioridade;
};

//Fun��o respons�vel por exibir o nome e um tra�o para cada milisegundo
void ExibirTraco(int qTraco, char nome[100])
{
	cout << nome;

	for(int i = 0; i < qTraco; i++)
	{
		cout << "-";
	}
}

int main()
{
	Processo processos[100];
	ifstream in;

	char nomeArq[100];			//Nome do arquivo
	int count = 0;				//Contador auxiliar
	float tempo = 0;			//Auxilia na contagem do tempo
	float tMedio = 0;			//Tempo m�dio de execu��o

	//L� o nome do arquivo
	cin.getline(nomeArq, 100);
	
	//Abre o arquivo
	in.open(nomeArq, ifstream::in);

	//L� os dados do arquivo e armazena em um vetor
	while(!in.eof())
	{
		in >> processos[count].nome;
		in >> processos[count].tExecucao;
		in >> processos[count].prioridade;

		count++;
	}
	
	in.close();

	for(int i = 0; i < count; i++)
	{
		for(int j = 0; j < count; j++)
		{
			//Vari�veis que auxiliam na organiza��o dos dados
			char nome[100];
			int prioridade = 0;
			int tExecucao = 0;

			//Organiza o vetor por prioridade em ordem crescente 
			if(processos[i].prioridade < processos[j].prioridade)
			{
				strcpy(nome, processos[i].nome);
				tExecucao = processos[i].tExecucao;
				prioridade = processos[i].prioridade;

				strcpy(processos[i].nome, processos[j].nome);
				processos[i].tExecucao = processos[j].tExecucao;
				processos[i].prioridade = processos[j].prioridade;

				strcpy(processos[j].nome, nome);
				processos[j].tExecucao = tExecucao;
				processos[j].prioridade = prioridade;
			}
		}
	}

	for(int i = 0; i < count; i++)
	{
		//Exibe o nome e os tra�os
		ExibirTraco(processos[i].tExecucao, processos[i].nome);
		
		//Calcula o tempo m�dio
		tMedio += tempo;
		tempo += processos[i].tExecucao;
	}

	//Exibe o tempo m�dio
	cout << fixed << setprecision(1);
	cout << endl << "Tempo medio de espera: " << tMedio / count << " ms" << endl;

	return 0;
}