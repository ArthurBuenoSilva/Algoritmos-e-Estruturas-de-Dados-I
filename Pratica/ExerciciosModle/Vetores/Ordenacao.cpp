#include <iostream>

using namespace std;

int main(){
    
    int n = 0;
    int t = 0;
    int v[100];
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){
            
            if(v[i] < v[j]){
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        
        }
    }
    
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}