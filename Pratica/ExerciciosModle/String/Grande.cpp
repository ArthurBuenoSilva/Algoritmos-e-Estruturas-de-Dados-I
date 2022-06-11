#include <iostream>
#include <cstring>

using namespace std;

struct Pessoa{
    
    char nome[50];
    int sexo;
    char estadoCivil;
};

int main(){
    
    Pessoa pessoas[100];

    int count = 0;
    int pCasados = 0;
    int idadeM = 0;
    
    do{
        
        cin.ignore();
        cin.getline(pessoas[count].nome, 50);
        
        count++;
        
    }while(strcmp(pessoas[count].nome, "sair") != 0);
    
    cout << "aaa" << endl;
    
    return 0;
}