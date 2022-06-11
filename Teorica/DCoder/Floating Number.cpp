#include <iostream>
#include <iomanip>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{

    int t, x;
    float n;
    
    cin>>t;
    
    while(x != t){
        cin>>n;
        cout<<fixed<<setprecision(2);
        cout<<n<<endl;
        x++;
    }
    
    return 0;
}