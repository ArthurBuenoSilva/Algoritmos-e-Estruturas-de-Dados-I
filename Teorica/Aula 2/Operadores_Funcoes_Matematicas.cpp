#include <iostream>
#include <iomanip>// Fixa as casas decimais
#include <cmath>// Fun��es matem�ticas
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x=0, y=0;
	
	//Opera��es b�sicas
	int soma, subtracao, multiplicao, resto;
	float divisao;
	
	//Fun��es matem�ticas
	float raiz, potencia;
	
	cin>>x>>y;
	
	//Opera��es b�sicas
	soma = x + y;
	subtracao = x - y;
	multiplicao = x * y;
	divisao = (x*1.0) / y;
	resto = x%y;
	
	//Fun��es matem�ticas
	raiz = sqrt(x);
	potencia = pow(x, y);
	
	//Fixa a quantidade de casas decimais em vari�veis float
	cout<<fixed<<setprecision(2);
		
	//Exibi��o dos resultados
	cout<<"Soma: "<<soma<<endl;
	cout<<"Subtra��o: "<<subtracao<<endl;
	cout<<"Multiplica��o: "<<multiplicao<<endl;
	cout<<"Divis�o: "<<divisao<<endl;
	cout<<"Resto: "<<resto<<endl;	
	
	cout<<"Raiz: "<<raiz<<endl;
	cout<<"Potencia: "<<potencia<<endl;
	
	return 0;
}