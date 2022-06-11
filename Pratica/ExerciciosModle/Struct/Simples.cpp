#include <iostream>

using namespace std;

struct Pessoa{
  
  char nome[50];
  char aniversario[50];
  char sexo[2];
};

int main(){
    
    Pessoa pessoa;
    
    cin.getline(pessoa.nome, 50);
    cin.getline(pessoa.aniversario, 50);
    cin.getline(pessoa.sexo, 2);
    
    cout << pessoa.nome << endl;
    cout << pessoa.aniversario << endl;
    cout << pessoa.sexo << endl;
    
    return 0;
}