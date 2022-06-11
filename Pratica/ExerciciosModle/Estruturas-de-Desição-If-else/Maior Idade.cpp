#include<iostream>

using namespace std;

int main(){
	
	//Variáveis
	
	char nome1[50];
	char nome2[50];
	
	int idade1, idade2;
	
	//Entradas
	
	cin.getline(nome1,50);
	cin>>idade1;
	
	cin.ignore();
	
	cin.getline(nome2, 50);
	cin>>idade2;
	
	//Processamento e Saída
	
	if(idade1 == idade2){
		cout<<"Idades iguais"<<endl;
	}else if(idade1 > idade2){
		cout<<nome1<<endl;
	}else{
		cout<<nome2<<endl;
	}
	
	return 0;
}