#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	//Variáveis
	int c, i;
	float p, pag;
	char nome[50];
	char cidade[50];

	//Entrada
	cin >> c >> p;
	cin.ignore();
	cin.getline(nome, 50);
	cin.getline(cidade, 50);
	cin >> i >> pag;

	cout << fixed << setprecision(2);

	//Processamento e Saída
	switch(c)
	{
	case 1:
	{
		cout << "Queijo" << endl;
		cout << "Valor total = " << p << endl;
		cout << "Troco = " << pag - p << endl;
		break;
	}
	case 2:
	{
		cout << "Geleia" << endl;
		cout << "Valor total = " << p << endl;
		cout << "Troco = " << pag - p << endl;
		break;
	}
	case 3:
	{
		cout << "Doce" << endl;
		cout << "Valor total = " << p << endl;
		cout << "Troco = " << pag - p << endl;
		break;
	}
	case 4:
	{
		cout << "Refrigerante" << endl;
		cout << "Valor total = " << p << endl;
		cout << "Troco = " << pag - p << endl;
		break;
	}
	case 5:
	{
		cout << "Sorvete" << endl;
		cout << "Valor total = " << p << endl;
		cout << "Troco = " << pag - p << endl;
		break;
	}
	case 6:
	{
		cout << "Presunto cru" << endl;
		cout << "Valor total = " << p << endl;
		cout << "Troco = " << pag - p << endl;
		break;
	}
	case 7:
	{
		cout << "Vinho" << endl;
		cout << "Valor total = " << p << endl;
		cout << "Troco = " << pag - p << endl;
		break;
	}
	}

	return 0;
}
