#include <iostream>

using namespace std;

int main(){
	
	int l = 0;				//N� de linhas da matriz
	int c = 0;				//N� de colunas da matriz
	
	int mat[100][100];		//Matriz que armazena os n�meros
	
	int n = 0;				//Armazena a linha escolhida pelo usu�rio
	
	//L� a quantidade de Linhas e Colunas
	cin >> l >> c;
	
	//L� os n�meros e armazena na matriz
	for(int i = 0; i < l; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cin >> mat[i][j];
		}
	}
	
	//L� a o n�mero que corresponde a linha escolhida pelo usu�rio
	cin >> n;
	
	//Exibindo a linha escolhida pelo usu�rio
	for(int j = 0; j < c; j++)
	{
		if((c - 1) == j){
			cout << mat[n][j] << endl;
		}else{
			cout << mat[n][j] << " ";
		}		
	}	
	
	return 0;
}