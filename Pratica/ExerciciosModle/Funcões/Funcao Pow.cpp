#include <iostream>

using namespace std;

int potenciacao(int x, int y){
    
    int r = 1;
    
    for (int i = 0; i < y; i++) {
        r = r * x;
    }
    
    return r;
}

int main(){
    
    int x = 0;  //Valor 1
    int y = 0;  //Valor 2
    int r = 0;  //Resultado
    
    cin >> x >> y;
    
    r = potenciacao(x, y);
    
    cout << r << endl;
    
    return 0;
}