#include <iostream>
#include <locale.h>

using namespace std;

//Verifica se os lados formar um triângulo
bool Triangulo(int l1, int l2, int l3){
	
	if((l1 + l2) > l3 && (l2 + l3) > l1 && (l1 + l3) > l2){
		return true;
	}else{
		return false;
	}
}

//Calcula a área do triângulo
void Area(){
	 
	float area = 0;
	int base = 0;
	int altura = 0;
	 
	//Lê a base e altura
	cin >> base >> altura;
 	
 	//Calcula a área
	area = (base * altura) / 2;
	
	//Exibe a área
	cout << "Area: " << area << endl;
}

//Calcula o perímetro do triangulo
float Perimetro(int &l1, int &l2, int &l3){
	
	float x = l1 + l2 + l3;
	
	return x;
}

int main(){	
	
	//Comando que permite o uso da acentuação da lingua Portuguesa
	setlocale(LC_ALL, "portuguese-brazilian");
	
	//Variáveis que armazenam os lados do triângulo
	int l1 = 0;
	int l2 = 0;
	int l3 = 0;
	
	//Armazena o perimetro
	float per = 0;
	
	//Lê os lados do triangulo
	cin >> l1 >> l2 >> l3;
	
	//Verifica se é um triângulo e exibe os dados
	if(Triangulo(l1, l2, l3)){
		cout << "Os três valores são lados de um triangulo" << endl;
		Area();
		per = Perimetro(l1, l2, l3);
		cout << "Perimetro: " << per << endl;
	}else{
		cout << "Nao eh possível formar um triangulo" << endl;
	}

	
	return 0;
}