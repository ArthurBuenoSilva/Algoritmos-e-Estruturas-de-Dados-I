#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    //Vari·veis

    float x, y, z;
    float d, l, e;

    //Entrada

    cin >> x >> y >> z;

    //Processamento

    d = x / 4.04;
    l = y / 5.32;
    e = z / 4.60;

    //Sa√≠da

    cout << fixed << setprecision(2);
    cout << "Dolar: " << d <<endl;
    cout << "Libra: " << l <<endl;
    cout << "Euro: " << e;

    return 0;
}