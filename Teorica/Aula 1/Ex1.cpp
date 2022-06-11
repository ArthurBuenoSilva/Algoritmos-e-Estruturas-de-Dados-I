#include <iostream>

using namespace std;

int main()
{

	int n, x, r = 0;

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> x;
		r = r + x;
	}

	cout << r << endl;

	return 0;
}
