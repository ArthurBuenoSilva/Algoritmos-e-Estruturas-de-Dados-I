#include <iostream>
 
using namespace std;
 
int main() {
 
    int n = 0;				//Vari�vel que armazena um inteiro para se processado
    int soma = 0;			//Armazena a soma
    
    //L� um n�mero inteiro
    cin >> n;
    
    for(int i = 0; i <= n; i++){
    	//Realiza a soma
		soma += i;
	}
	
	//Exibe a soma
	cout << "Soma = " << soma << endl;
 
    return 0;
}