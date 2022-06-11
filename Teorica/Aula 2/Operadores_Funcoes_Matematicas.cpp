#include <iostream>
#include <iomanip>// Fixa as casas decimais
#include <cmath>// Funções matemáticas
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x=0, y=0;
	
	//Operações básicas
	int soma, subtracao, multiplicao, resto;
	float divisao;
	
	//Funções matemáticas
	float raiz, potencia;
	
	cin>>x>>y;
	
	//Operações básicas
	soma = x + y;
	subtracao = x - y;
	multiplicao = x * y;
	divisao = (x*1.0) / y;
	resto = x%y;
	
	//Funções matemáticas
	raiz = sqrt(x);
	potencia = pow(x, y);
	
	//Fixa a quantidade de casas decimais em variáveis float
	cout<<fixed<<setprecision(2);
		
	//Exibição dos resultados
	cout<<"Soma: "<<soma<<endl;
	cout<<"Subtração: "<<subtracao<<endl;
	cout<<"Multiplicação: "<<multiplicao<<endl;
	cout<<"Divisão: "<<divisao<<endl;
	cout<<"Resto: "<<resto<<endl;	
	
	cout<<"Raiz: "<<raiz<<endl;
	cout<<"Potencia: "<<potencia<<endl;
	
	return 0;
}