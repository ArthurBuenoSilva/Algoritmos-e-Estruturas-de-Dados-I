#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct Pessoa{
    
    char nome[50];
    int sexo;
    char estadoCivil;
    int idade;
};

int main(){
    
    Pessoa pessoas[200];
    
    int i = 0;
    
    float pCasadas = 0;
    float idadeM = 0;
    int indexVelho = 0;
    int idadeVelho = 0;
    
    cin.getline(pessoas[i].nome, 50);
    while(strcmp(pessoas[i].nome, "sair") != 0){
		
		//Leitura dos dados
		cin >> pessoas[i].sexo;
		while(pessoas[i].sexo != 1 && pessoas[i].sexo != 2){
			cin >> pessoas[i].sexo;
		}
		
		cin >> pessoas[i].estadoCivil;
		while(pessoas[i].estadoCivil != 'C' &&
			  pessoas[i].estadoCivil != 'S' &&
		  	  pessoas[i].estadoCivil != 'V' &&
		  	  pessoas[i].estadoCivil != 'D')
		{
			cin >> pessoas[i].estadoCivil;	
	    }	
	    
	    cin >> pessoas[i].idade;
	    
	    //Processamento
	    if(pessoas[i].estadoCivil == 'C'){
			pCasadas++;
		}
	    
	    idadeM += pessoas[i].idade;
	    
	    if(pessoas[i].idade >= idadeVelho && pessoas[i].sexo == 1){	    	
			idadeVelho = pessoas[i].idade;
			indexVelho = i;
		}
	    
	    i++;
	    
	    cin.ignore();
	    cin.getline(pessoas[i].nome, 50);
	}    
    
    pCasadas = (pCasadas * 100.0) / i;
    idadeM = (idadeM * 1.0) / i;
    
    cout << fixed << setprecision(2);
    cout << "Porcentagem de pessoas casadas: " << pCasadas << "%" << endl;
    cout << "Idade media da populacao: " << idadeM << " anos" << endl;
    cout << "Nome e idade do homem mais velho: " << pessoas[indexVelho].nome << " " << pessoas[indexVelho].idade << " anos" << endl;
    
    return 0;
}