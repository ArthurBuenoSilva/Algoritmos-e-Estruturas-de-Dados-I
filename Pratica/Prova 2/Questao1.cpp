#include <iostream>

using namespace std;

int main(){
	
	int v[100];		//Armazena a quantidade de passageiros
	int n = 0;		//Armazena a quantidade de vag�es
	
	//L� a quantidade de vag�es
	cin >> n;	
	
	//L� e armazena a quantidade de passageiros em seus respectivos vag�es
	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	
	//Verifica e exibe se o vag�o est� lotado ou ainda tem vagas
	for(int i = 0; i < n; i++)
	{
		if(v[i] >= 20){
			cout << "Vagao " << i << ": Lotado"<< endl;
		}else{
			cout << "Vagao " << i << ": Tem vaga"<< endl;
		}
	}
	
	return 0;
}