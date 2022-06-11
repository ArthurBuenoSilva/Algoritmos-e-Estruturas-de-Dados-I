#include <iostream>

using namespace std;

int main(){
    
    //Variáveis
    int n, f = 1;
    
    //Entrada
    cin >> n;
    
    //Processamento
    for(int i = n; i > 0; i--){
        
        f = i * f;
    }
    
    //Saída
    cout << f << endl;
    
    return 0;
}