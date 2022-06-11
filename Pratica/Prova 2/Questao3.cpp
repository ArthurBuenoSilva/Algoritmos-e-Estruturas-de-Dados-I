#include <iostream>
#include <locale.h>

using namespace std;

//Verifica se os lados formar um tri�ngulo
bool Triangulo(int l1, int l2, int l3){
	
	if((l1 + l2) > l3 && (l2 + l3) > l1 && (l1 + l3) > l2){
		return true;
	}else{
		return false;
	}
}

//Calcula a �rea do tri�ngulo
void Area(){
	 
	float area = 0;
	int base = 0;
	int altura = 0;
	 
	//L� a base e altura
	cin >> base >> altura;
 	
 	//Calcula a �rea
	area = (base * altura) / 2;
	
	//Exibe a �rea
	cout << "Area: " << area << endl;
}

//Calcula o per�metro do triangulo
float Perimetro(int &l1, int &l2, int &l3){
	
	float x = l1 + l2 + l3;
	
	return x;
}

int main(){	
	
	//Comando que permite o uso da acentua��o da lingua Portuguesa
	setlocale(LC_ALL, "portuguese-brazilian");
	
	//Vari�veis que armazenam os lados do tri�ngulo
	int l1 = 0;
	int l2 = 0;
	int l3 = 0;
	
	//Armazena o perimetro
	float per = 0;
	
	//L� os lados do triangulo
	cin >> l1 >> l2 >> l3;
	
	//Verifica se � um tri�ngulo e exibe os dados
	if(Triangulo(l1, l2, l3)){
		cout << "Os tr�s valores s�o lados de um triangulo" << endl;
		Area();
		per = Perimetro(l1, l2, l3);
		cout << "Perimetro: " << per << endl;
	}else{
		cout << "Nao eh poss�vel formar um triangulo" << endl;
	}

	
	return 0;
}