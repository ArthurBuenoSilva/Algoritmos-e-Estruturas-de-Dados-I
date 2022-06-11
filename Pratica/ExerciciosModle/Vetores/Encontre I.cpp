#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int n = 0;
    int x = 0;
    int qtdX = 0;
    int v[50];
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    cin >> x;
    
    for(int i = 0; i < n; i++){
        if(v[i] == x){
            qtdX++;
        }
    }
    
    cout << fixed << setprecision(2);
    cout << (qtdX * 100.0) / n << endl;
}