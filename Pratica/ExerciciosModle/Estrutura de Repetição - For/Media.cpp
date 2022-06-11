#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    //Variáveis
    float n, x, media;
    
    //Entrada e Processamento
    for(int i = 0; i < 10; i++){
        cin >> x;
        media += x; 
    }
    
    //Saída
    cout << fixed << setprecision(2);
    cout << media / 10 << endl;
    
    return 0;
}