#include <iostream>

using namespace std;

int main(){
    
    //Vari�veis
    int n, f = 1;
    
    //Entrada
    cin >> n;
    
    //Processamento
    for(int i = n; i > 0; i--){
        
        f = i * f;
    }
    
    //Sa�da
    cout << f << endl;
    
    return 0;
}