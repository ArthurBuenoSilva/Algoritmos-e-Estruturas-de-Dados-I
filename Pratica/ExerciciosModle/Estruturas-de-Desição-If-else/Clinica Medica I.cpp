#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{

	//Variáveis

	int Idade;
	char Nome[50];
	float Altura, Peso, IMC;


	//Entradas

	cin >> Idade;
	cin.ignore();

	cin.getline(Nome, 50);
	cin >> Altura;
	cin >> Peso;

	//Processamento e Saída

	cout << "Nome: " << Nome << endl;
	cout << "Idade: " << Idade << endl;

	IMC = Peso / pow(Altura, 2);

	cout << fixed << setprecision(2);
	cout << "IMC: " << IMC << " kg/m^2" << endl;

	if(IMC <= 15)
	{
		cout << "Extremamente abaixo do peso" << endl;
	}
	else if(IMC > 15 && IMC <= 16)
	{
		cout << "Gravemente abaixo do peso" << endl;
	}
	else if(IMC > 16 && IMC <= 18.5)
	{
		cout << "Abaixo do peso ideal" << endl;
	}
	else if(IMC > 18.5 && IMC <= 25)
	{
		cout << "Peso Ideal" << endl;
	}
	else if(IMC > 25 && IMC <= 30)
	{
		cout << "Sobrepeso" << endl;
	}
	else if(IMC > 30 && IMC <= 35)
	{
		cout << "Obesidade de grau I" << endl;
	}
	else if(IMC > 35 && IMC <= 40)
	{
		cout << "Obesidade de grau II (grave)" << endl;
	}
	else
	{
		cout << "Obesidade de grau III (mórbida)" << endl;
	}

	return 0;
}
