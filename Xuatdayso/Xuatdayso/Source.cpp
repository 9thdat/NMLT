#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
	for (i = 1; i <= n; i += 1)
		cout << i << " ";
	cout << endl;
	for (i = 10; i <= n; i += 5)
		cout << i << " ";
	cout << endl;
	for (i = 20; i <= n; i += 10)
		cout << i << " ";
	return 0;
}