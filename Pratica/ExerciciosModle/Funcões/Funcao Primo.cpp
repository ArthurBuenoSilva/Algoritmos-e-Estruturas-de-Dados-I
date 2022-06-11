#include <iostream>
#include <cstring>

using namespace std;

string primo(int x){
    
    int n = 0;
    
    if(x == 1){
        return "Not";
    }
    
    for (int i = 1; i <= x; i++) {
        
        if(x % i == 0){
            n++;
        }
    }
    
    if(n > 2){
        return "Not";
    }else if(n == 2){
        return "Primo";
    }
}

int main(){
    
    int x = 0;
    string y;
    
    cin >> x;
    
    y = primo(x);
    
    cout << y << endl;
    
    return 0;
}