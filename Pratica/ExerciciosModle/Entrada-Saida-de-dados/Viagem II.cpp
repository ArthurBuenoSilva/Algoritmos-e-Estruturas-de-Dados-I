#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    //Variáveis

    int x, y, c;
    float p, r;

    //Entrada

    cin >> x >> y;
    cin >> c >> p;

    //Processamento

    r = ((x * 1.0) * y) - (c * p);

    //Saída

    cout << fixed << setprecision(2);
    cout << "R$ "<<r;

    return 0;
}