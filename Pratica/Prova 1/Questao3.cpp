#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Variáveis
	int nViews = 0;             //Número de views
	int duracao = 0;            //Duração em segundos
	int categoria = 0;          //Categoria
	char nome[50];              //Nome

	int vCategoria[3];          //Views de cada categoria
	int mCategoria = 0;         //Maior categoria
	int mViews = 0;             //Maior quantidade de views
	int tViews = 0;             //Total de views
	int qVideos = 0;            //Quatidade de vídeos
	int tSegundos = 0;          //Tempo total em segundos
	float pCategoria[3];        //Porcentagem de cada categoria
	float tMedio = 0;           //Tempo médio dos vídeos

	//Limpa os valores dos vetores
	for(int i = 0; i < 3; i++)
	{
		vCategoria[i] = 0;
		pCategoria[i] = 0;
	}

	//Realiza a leitura dos dados
	while(nViews >= 0)
	{
		//Lê o número de views
		cin >> nViews;

		//Verifica se o número de views é menor que 0
		if(nViews < 0)
		{
			break;
		}
		
		//Lê o nome, a duração e a categoria do vídeo
		cin.ignore();
		cin.getline(nome, 50);
		cin >> duracao;
		cin >> categoria;

		//Adiciona nos vetores a quantidade de views correspondente a cada categoria
		switch(categoria)
		{
			case 1:
			{
				vCategoria[0] += nViews * 1000.0;
				break;
			}
			case 2:
			{
				vCategoria[1] += nViews * 1000.0;
				break;
			}
			case 3:
			{
				vCategoria[2] += nViews * 1000;
				break;
			}
		}

		//Define a quantidade total de views
		tViews += nViews * 1000.0;
		
		//Define o total de segundos
		tSegundos += duracao;
		
		//Define a quantidade de vídeos
		qVideos++;
	}

	//Define a duração média dos vídeos
	tMedio = (tSegundos * 1.0) / qVideos;

	//Realiza o processamento dos dados relacionados as categorias
	for(int i = 0; i < qVideos; i++)
	{
		//Define a categoria com maior quantidade de views
		if(vCategoria[i] > mViews)
		{

			mViews = vCategoria[i];
			mCategoria = i;
		}

		//Define a porcentagem de views de cada categoria baseado no total de views
		switch(i)
		{
			case 0:
			{
				pCategoria[0] = (vCategoria[0] * 100.0) / tViews;
				break;
			}
			case 1:
			{
				pCategoria[1] = (vCategoria[1] * 100.0) / tViews;
				break;
			}
			case 2:
			{
				pCategoria[2] = (vCategoria[2] * 100.0) / tViews;
				break;
			}
		}
	}

	//Exibe a categoria com mais views
	switch(mCategoria)
	{
    	case 0:
    	{
    		cout << "A categoria que teve mais visualizacoes foi esporte" << endl;
    		break;
    	}
    	case 1:
    	{
    		cout << "A categoria que teve mais visualizacoes foi musica" << endl;
    		break;
    	}
    	case 2:
    	{
    		cout << "A categoria que teve mais visualizacoes foi entretenimento" << endl;
    		break;
    	}
	}

	//Define a precisão de 2 casas decimais
	cout << fixed << setprecision(2);
	
	//Exibe o restante dos dados
	cout << "Tempo medio de duracao dos videos " << tMedio << endl;
	cout << "Porcentagem esporte: " << pCategoria[0] << endl;
	cout << "Porcentagem musica: " << pCategoria[1] << endl;
	cout << "Porcentagem entretenimento: " << pCategoria[2] << endl;

	return 0;
}