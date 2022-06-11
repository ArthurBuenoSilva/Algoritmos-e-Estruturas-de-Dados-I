#include <iostream>

using namespace std;

int main()
{

	int n, x;
	float r = 0;

	n = 5;

	for(int i = 0; i < n; i++)
	{
		cin >> x;
		r = r + x;
	}

	cout << 1.0 * r / 5 << endl;

	return 0;
}
