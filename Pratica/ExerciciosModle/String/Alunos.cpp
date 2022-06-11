#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int matricula = 0;
    int x = 0;
    
	char nome[50];
	
	float np1 = 0;
	float np2 = 0;
	float media = 0;
	
	float mGeral = 0;
	float maiorM = 0;
	float menorM = 1000;
	
	char nomeMaior[50];
	char nomeMenor[50];

    cin.getline(nome, 50);

	cout << fixed << setprecision(2);
    do{
        if(x == 0){
            
        }else{
            cin.ignore();
            cin.getline(nome, 50);
        }
        if(strcmp(nome, "SAIR") != 0){
            
            cin >> matricula;
            cin >> np1 >> np2;
            
            media = (np1 + np2) / 2;
            mGeral += media;
            
            if(media >= maiorM){
                maiorM = media;
                strcpy(nomeMaior, nome);
            }
            
            if(media <= menorM){
                menorM = media;
                strcpy(nomeMenor, nome);
            }
            
            cout << "Aluno: " << nome << endl;
			cout << "Mat: " << matricula << endl;
			cout << "Media: " << media << endl;
            
            x++;
        }else if(x == 0){
			cout << "Programa Finalizado" << endl;
		}else{
			cout << "Media Geral: " << mGeral / x << endl;
			cout << "Maior media: " << maiorM << " - " << nomeMaior << endl;
			cout << "Menor media: " << menorM << " - " << nomeMenor << endl;
		}
		
    }while(strcmp(nome, "SAIR") != 0);

	return 0;
}