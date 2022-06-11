#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float volume(float raio){
    
    float v = 0;
    float pi = 3.14;
    
    v = (4.0/3.0) * pi * pow(raio, 3);
    
    return v;
}

int main(){
    
    float r = 0;    //Raio 
    float v = 0;    //Volume
    
    cin >> r;
    
    v = volume(r);
    
    cout << fixed << setprecision(2);
    cout << v << endl;
    
    return 0;
}