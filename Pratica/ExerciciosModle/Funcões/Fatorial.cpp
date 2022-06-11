#include <iostream>

using namespace std;

void fatorial(int &f){
    
    int n = f;
    int x = 1;
    
    for (int i = 1; i <= n; i++) {
        
        x = x * i;
    }
    
    f = x;
}

int main(){
    
    int f = 0;
    
    cin >> f;
    
    fatorial(f);
    
    cout << f;
}