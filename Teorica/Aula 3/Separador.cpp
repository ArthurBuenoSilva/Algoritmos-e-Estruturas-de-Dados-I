#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
	char str[] = "A cobra vai fumar";
	char *p;
	
	p = strtok(str, " ");
	
	while(p != NULL){
		
		cout << p << endl;
		p = strtok(NULL, " ");
	}

	return 0;
}
