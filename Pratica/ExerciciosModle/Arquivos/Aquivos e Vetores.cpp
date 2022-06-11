#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    ifstream in;
    int v[100];
    int i = 0;
    
    in.open("arquivo.txt", ifstream::in);
    
    while(!in.eof()){
        
        in >> v[i];
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--) {
        cout << v[j] << endl;
    }
    
    in.close();
    
    return 0;
}