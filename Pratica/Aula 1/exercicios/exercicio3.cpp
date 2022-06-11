#include<iostream>
#include<cmath>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c, delta;
	
	cout<<"Informe o valor de A, B e C respectivamente: ";
	cin>>a>>b>>c;
	
	delta = pow(b, 2) - (4 * a * c);	
	
	cout<<endl<<"Delta = "<<delta;
	
	return 0;
}
