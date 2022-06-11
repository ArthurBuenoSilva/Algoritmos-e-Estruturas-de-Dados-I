#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    ifstream in;
    int x = 0;
    
    in.open("aaa.txt", ifstream::in);
    
    while(!in.eof()){
        in >> x;
        cout << x << endl;
    }
    
    return 0;
}