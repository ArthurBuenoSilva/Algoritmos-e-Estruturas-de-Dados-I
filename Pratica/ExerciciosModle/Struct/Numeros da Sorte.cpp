#include <iostream>

using namespace std;

struct Numero{
    
    int soma;
};

int main(){
    
    Numero soma;
    
    soma.soma = 0;
    
    int n = 0;
    int aux = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        
        cin >> aux;
        
        if(aux % 2 == 0){
            soma.soma += aux;
        }
    }
    
    cout << soma.soma << endl;
    
    return 0;
}