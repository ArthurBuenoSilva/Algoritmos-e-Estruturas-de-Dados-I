#include <iostream>

using namespace std;

struct Atleta{
    
    char nome[50];
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    int notaFinal;
};

int main(){
    
    Atleta atletas[100];
    
    int n = 0;
    int vencedor = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        
        cin.ignore();
        cin.getline(atletas[i].nome, 50);
        cin >> atletas[i].nota1 >> atletas[i].nota2 >> atletas[i].nota3 >> atletas[i].nota4;
        atletas[i].notaFinal = atletas[i].nota1 + atletas[i].nota2 + atletas[i].nota3 +atletas[i].nota4;
        
        if(atletas[i].notaFinal > atletas[vencedor].notaFinal){
            vencedor = i;
        }
    }
    
    cout << "Vencedor: " << atletas[vencedor].nome << endl;
    
    return 0;
}