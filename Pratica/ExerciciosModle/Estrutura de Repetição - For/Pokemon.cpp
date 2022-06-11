#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	//Variáveis
	int n = 0, q = 0, f = 0, qp = 0;
	float m = 0;
	char nome[50];

	//Entrada
	cin >> n;

	//Entrada, Processamento e Saída
	if(n == 0)
	{
		qp = 0;
		m = 0;

		cout << "Total de Pokebolas = " << qp << endl;
		cout << "Media de forca = " << m << endl;
	}
	else
	{

		for(int i = 0; i < n; i++)
		{

			cin.ignore();
			cin.getline(nome, 50);

			cin >> q;
			cin >> f;

			qp += q;
			m += f;
		}

		m = m / n;

		cout << "Total de Pokebolas = " << qp << endl;
		cout << fixed << setprecision(2);
		cout << "Media de forca = " << m << endl;
	}

	return 0;
}