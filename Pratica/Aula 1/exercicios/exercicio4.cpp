#include<iostream>
#include<cmath>
#include<iomanip>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float x, r_quadrada, r_cubica;
	
	cout<<"Informe um valor: ";
	cin>>x;
	
	r_quadrada = pow(x, 0.500);
	r_cubica = pow(x, 0.333);
	
	cout<<fixed<<setprecision(4);
	cout<<"Raiz quadrada = "<<r_quadrada<<endl;
	cout<<"Raiz cúbica = "<<r_cubica;
	
	return 0;
}
