#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int ano_atual, ano_nasc;
	
	cout<<"Digite o ano atual: ";
	cin>>ano_atual;
	
	cout<<endl<<"Digite o ano que voc� nasceu: ";
	cin>>ano_nasc;
	
	cout<<endl<<"No final do ano voc� ter� "<<ano_atual - ano_nasc<< " anos";
	
	return 0;
}
