#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//Vari�veis
	float alt = 0, mAlt = 9999, mAltM = 0;
	int sex = 0, qH = 0, qM = 0;

	//Entrada e Processamento
	while(alt != -1)
	{

		cin >> alt;

		if(alt != -1)
		{

			cin >> sex;

			if(alt < mAlt)
			{
				mAlt = alt;
			}

			if(sex == 1)
			{
				qH++;
			}
			else if(sex == 2)
			{
				mAltM += alt;
				qM++;
			}
		}
	}

	//Sa�da
	cout << qH << " Hom." << endl;
	cout << fixed << setprecision(2);
	cout << "Menor altura: " << mAlt << endl;
	cout << "M�dia: " << mAltM / qM << endl;
}
