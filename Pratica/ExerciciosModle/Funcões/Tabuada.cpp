#include <iostream>

using namespace std;

void tabuada(){
    
    int x = 0;
    
    cin >> x;
    
    for (int i = 1; i <= 10; i++) {
        cout << x << " x " << i << " = " << x * i << endl;
    }
}

int main(){
    
    tabuada();
    
    return 0;
}