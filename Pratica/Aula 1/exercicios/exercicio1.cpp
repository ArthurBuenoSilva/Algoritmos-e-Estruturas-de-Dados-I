#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int idade;
	
	cout<<"Digite seu nome: ";
	cin.getline(nome, 50);
	
	cout<<endl<<"Digite sua idade: ";
	cin>>idade;
	
	cout<<endl<<"Seu nome é "<<nome<< " e você tem "<<idade<<" anos.";
	
	return 0;
}
