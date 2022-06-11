#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int v[100];
    int n = 0;
    int i = 0;
    float m = 0;
    
    cin >> n;
    
    for(i = 0; i < n; i++){
        cin >> v[i];
        m += v[i];
    }
    
    m = m / (i * 1.0);
    
    cout << fixed << setprecision(2);
    cout << "Media: " << m << endl;
    cout << "Maiores que a media:";
    
    for(i = 0; i < n; i++){
        if(v[i] > m){
            cout << " " << v[i];
        }
    }
}