#include <iostream>
#include <cmath> //Funções matemáticas
#include <iomanip> //Manipular ponto flutuante
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	// Operações básicas +, -, /, *, %
	int x = 10, y = 2, potencia;
	float raiz;
	
	// Potência	
	potencia = pow(x, y); //Base, expoente
	
	//Raiz quadrada
	raiz = sqrt(x); 
	cout<<x<<" elevado a "<<y<<" = "<<potencia<<endl;
	
	cout<<fixed<<setprecision(2);
	cout<<"Raiz de "<<x<<" = "<<raiz<<endl;

	float pi = 3.1415;
	
	cout<<pi<<" arredondado para cima = "<<ceil(pi)<<endl;
	cout<<pi<<" arredondado para baixo = "<<floor(pi)<<endl;
	
	int num = 10, den = 3;
	float resultado;
	
	resultado = (num * 1.0)/den;	
	cout<<"Resultado = "<<resultado<<endl;
	
	return 0;
}