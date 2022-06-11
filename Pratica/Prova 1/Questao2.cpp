#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	//Vari�veis
	int n = 0;              //Valor da opera��o
	float x = 0;            //N�mero para realizar as opera��es
	float y = 0;            //N�mero para realizar as opera��es
	float result = 0;       //Resultado da opera��o

	//L� o valor da opera��o
	cin >> n;
	
	//L� os n�meros para realizar as opera��es
	cin >> x >> y;

    //Define a sa�da com 2 casas decimais
    cout << fixed << setprecision(2);
    
    //Verifica o valor da opera��o, realiza as opera��es e exibe o resultado
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