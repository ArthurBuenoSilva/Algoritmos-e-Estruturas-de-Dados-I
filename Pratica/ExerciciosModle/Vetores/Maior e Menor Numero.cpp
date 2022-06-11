#include <iostream>

using namespace std;

int main(){
    
    int n = 0;
    int v[100];
    
    int pMe = 0;
    int vMe = 0;
    int pMa = 0;
    int vMa = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    vMe = v[0];
    
    for(int i = 0; i < n; i++){
        
        if(v[i] < vMe){
            vMe = v[i];
            pMe = i;
        }
        
        if(v[i] > vMa){
            vMa = v[i];
            pMa = i;
        }
    }
    
    cout << "Pos Menor: " << pMe << endl;
    cout << "Valor Menor: " << vMe << endl;
    cout << "Pos Maior: " << pMa << endl;
    cout << "Valor Maior: " << vMa << endl;
}