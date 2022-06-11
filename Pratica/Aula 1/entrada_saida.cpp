//Bibliotecas

#include <iostream> //Entrada e Saída
#include <locale.h> //Usar acento

using namespace std; //Facilitar entrada e saída de dados

//Programa principal

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Comentário
	/* Comentário */
	
	//Saída
	
	cout<<"Hello World"<<endl;
	cout<<"Bem vindo ao lab c202";
	
	// Declarar Variáveis
	
	// tipo/nome; ou tipo/nome/valor;
	
	int idade = 20, numero;
	float nota;
	char nome[20];
	bool aprovado;
	
	// Saída de dados com variável
	
	cout<<endl<<"A idade do programa é: "<<idade;
	
	// Entradas de dados
	
	cout<<endl<<"Digite sua idade: ";
	cin>>idade;
	cout<<"A minha idade é: "<<idade;
	
	cout<<endl<<"Digite seu nome: ";
	cin.ignore(); //Ler char depois de número
	cin.getline(nome, 20);
	cout<<"Olá "<<nome<<endl;
	
	cout<<"O aluno "<<nome<<" tem "<<idade<<" anos"<<endl;
	
	return 0;
}