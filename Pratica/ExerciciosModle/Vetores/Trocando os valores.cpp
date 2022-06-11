#include <iostream>

using namespace std;

int main(){
    
    int n = 0;
    int v[100];
    int qtdNegativo = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        
        cin >> v[i];
        
        if(v[i] < 0){
            v[i] = 0;
            qtdNegativo++;
        }
    }
    
    for(int i = 0; i < n; i++){
        
        cout << v[i] << " ";
    }
    
    cout << endl << qtdNegativo << endl; 
    
    return 0;
}