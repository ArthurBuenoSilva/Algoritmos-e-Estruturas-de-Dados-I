#include <iostream>
#include <iomanip>

using namespace std;

void fazerMedia(float n1, float n2, float &media){
    
    media = (n1 + n2) / 2;
}

int main(){
    
    float n1 = 0; 
    float n2 = 0;
    float media = 0;
    
    cin >> n1 >> n2;
    
    fazerMedia(n1, n2, media);
    
    cout << fixed << setprecision(1);
    cout << media;
    
    return 0;
}