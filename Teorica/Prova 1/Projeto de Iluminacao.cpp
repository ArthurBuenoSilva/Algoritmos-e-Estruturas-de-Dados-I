#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main() {
 
    int c = 0; 					//Classe do c�modo
    int nLampadas = 0;			//N�mero de lampadas
    float x = 0;				//Largura do cmodo
    float y = 0;				//Comprimento do c�modo
    float area = 0;				//Area do comodo
    float potencia = 0;			//Potencia total
    
    //l� a classe, largura e comprimento
    cin >> c;
    cin >> x >> y;
    
    //Realiza o calculo da area
    area = x * y;
    
    //Verifica qual � a classe e calcula a potencia
    switch(c){
        case 1:{
            potencia = 15 * area;
            break;
        }
        case 2:{
            potencia = 18 * area;
            
            break;
        }
        case 3:{
            potencia = 20 * area;
            break;
        }
    }
    
    //Calcula o n�mero de lampadas
    nLampadas = ceil(potencia / 60);
    
    
    //Exibe os resultados
    cout << fixed << setprecision(1);
    cout << "Area do comodo: " << area << " m^2" << endl;
    cout << "Potencia necessaria: " << potencia << " W" << endl;
    cout << "Numero de lampadas de 60 W a comprar: " << nLampadas << endl;
 
    return 0;
}