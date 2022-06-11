#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct Livro{
	char nome[100];
	int nota;		
};

int main(){
	
	Livro livros[100];
	int count = 0;		//Contador
	
	int mNota = 0;		//Armazena a maior nota
	int mIndex = 0;		//Armazena o index da maior nota
	float media = 0;	//Armazena a m�dia
	
	//Executa at� que o nome seja a palavra "fim"
	while(strcmp(livros[count].nome, "fim") != 0){
		
		//L� o nome
		cin.getline(livros[count].nome, 100);
		if(strcmp(livros[count].nome, "fim") == 0){
			break;
		}
		//L� a nota
		cin >> livros[count].nota;
		cin.ignore();
		
		//Verifica qual a maior nota
		if(livros[count].nota >= mNota){
			mNota = livros[count].nota;
			mIndex = count;
		}
		
		//Incremeta a nota na m�dia
		media += livros[count].nota;
		
		count++;
	}	
	
	//Exibe as informa��es
	cout << fixed << setprecision(1);
	cout << "Media: " << media/count << endl;
	cout << "Maior nota: " << livros[mIndex].nome << endl;
	cout << "Tamanho do nome: " << strlen(livros[mIndex].nome) << endl;
	
	return 0;
}