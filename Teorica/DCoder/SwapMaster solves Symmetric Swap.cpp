#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int N;
    
    cin>>N;
    
    int A[N];
    
    for(int i = 0; i < N; i++){
        cin>>A[i];
    }
    
    for(int i = N - 1; i >= 0; i--){
        cout<<A[i]<<" ";
    }
    
    return 0;
}