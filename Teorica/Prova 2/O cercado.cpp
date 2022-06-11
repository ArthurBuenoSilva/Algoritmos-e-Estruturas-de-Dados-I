#include<iostream> 
#include<iomanip>
#include<cmath>

using namespace std;

//Função que calcula a distancia
float dist(int XA, int YA, int XB, int YB)
{
    float dist = sqrt(pow((XB - XA), 2) + pow((YB - YA), 2));
    return dist;
}

int main()
{
    float distancia;        //Distancia total
    float auxD = 0;   		//Auxiliar na distancia total
    float auxD2;
    int x[50];           	//Pontos X
    int y[50];           	//Pontos Y
    int count = 0;          //Contador auxiliar

    //Lendo os pontos de X e Y
    cin >> x[count] >> y[count];

    //Lendo e processando os dados
    while (x[count] != 0 && y[count] != 0)
    {
        if (count != 0)
        {
            auxD += dist(x[count - 1], y[count - 1], x[count], y[count]);
        }

        // Lendo o restante dos valores
        for (int i = 1; i < 2; i++)
        {
            count++;
            cin >> x[count] >> y[count];
        }
    }
    
    distancia += dist(x[0], y[0], x[count - 1], y[count - 1]);
	
    //Exibindo os resultados
    cout << fixed << setprecision(2);
    cout << distancia * 4 << endl;

    return 0;
}