#include <iostream>
#include <iomanip>

using namespace std;

double fatorial(int f){
    
    int n = f;
    int x = 1;
    
    for (int i = 1; i <= n; i++) {
        x = x * i;
    }
    
    f = x;
    
    return f;
}

double exponencial(double x, double y){
    
    double r = 1;
    
    for (int i = 0; i < y; i++) {
        r = r * x;
    }
    
    return r;
}

double f1(double n, double p){
    
    double r = fatorial(n) / (fatorial(p) * fatorial(n - p));
    
    return r;
}

double f2(double &n, double &p){
    
    double r = fatorial(n) / fatorial((n - p));
    
    return r;
}

void f3(double n, double p){
    
    p += 2;
    
    double r = exponencial(n, p);
    
    cout << r << endl;
}

double f4(){
    
    double x, y;
    
    cin >> x >> y;
    
    exponencial((x - 1), fatorial(y));
}

int main(){
    
    double n = 0, p = 0, r = 0;
    
    cin >> n >> p;
    r = f4();
    
    cout << fixed << setprecision(4);
    cout << f1(n, p) << endl;
    cout << f2(n, p) << endl;
    f3(n, p);
    cout << r << endl;
    
    return 0;
}