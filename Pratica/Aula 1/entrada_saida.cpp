//Bibliotecas

#include <iostream> //Entrada e Sa�da
#include <locale.h> //Usar acento

using namespace std; //Facilitar entrada e sa�da de dados

//Programa principal

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Coment�rio
	/* Coment�rio */
	
	//Sa�da
	
	cout<<"Hello World"<<endl;
	cout<<"Bem vindo ao lab c202";
	
	// Declarar Vari�veis
	
	// tipo/nome; ou tipo/nome/valor;
	
	int idade = 20, numero;
	float nota;
	char nome[20];
	bool aprovado;
	
	// Sa�da de dados com vari�vel
	
	cout<<endl<<"A idade do programa �: "<<idade;
	
	// Entradas de dados
	
	cout<<endl<<"Digite sua idade: ";
	cin>>idade;
	cout<<"A minha idade �: "<<idade;
	
	cout<<endl<<"Digite seu nome: ";
	cin.ignore(); //Ler char depois de n�mero
	cin.getline(nome, 20);
	cout<<"Ol� "<<nome<<endl;
	
	cout<<"O aluno "<<nome<<" tem "<<idade<<" anos"<<endl;
	
	return 0;
}