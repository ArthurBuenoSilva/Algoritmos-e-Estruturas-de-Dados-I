#include <iostream>

using namespace std;

int main()
{

	int n; //Numero de repeti��es
	int i; //Contador

	cin>>n;

	for(i = 1; i <= n; i++)
	{
		cout << "i = " << i << endl;
	}
	
	cout<<endl;
	
	for(i = 0; i < n; i++)
	{
		cout << "i = " << i + 1 << endl;
	}

	return 0;
}
