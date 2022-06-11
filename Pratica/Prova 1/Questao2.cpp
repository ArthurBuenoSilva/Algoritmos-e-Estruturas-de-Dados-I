#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//Variáveis
	int n = 0;              //Valor da operação
	float x = 0;            //Número para realizar as operações
	float y = 0;            //Número para realizar as operações
	float result = 0;       //Resultado da operação

	//Lê o valor da operação
	cin >> n;
	
	//Lê os números para realizar as operações
	cin >> x >> y;

    //Define a saída com 2 casas decimais
    cout << fixed << setprecision(2);
    
    //Verifica o valor da operação, realiza as operações e exibe o resultado
	switch(n)
	{
    	case 1:
    	{
    		result = pow(x, 2.0) / (x + 3.0);
            cout << result << endl;
    		break;
    	}
    	case 2:
    	{
    		result = sqrt((x + y));
            cout << result << endl;
    		break;
    	}
    	case 3:
    	{
    		result = (4.0 * x) + y;
            cout << result << endl;
    		break;
    	}
    	case 4:
    	{
    		result = (3.0 * x) - (2.0 * y);
            cout << result << endl;
    		break;
    	}
    	case 5:
    	{
    		result = sqrt((pow(x, 2.0) + pow(y, 2.0)));
            cout << result << endl;
    		break;
    	}
	}


	return 0;
}