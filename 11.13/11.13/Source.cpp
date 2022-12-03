#include <iostream>
using namespace std;
int main()
{
	int a[1000], n, x;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> x;
	for (int i = 0; i < n; i++)
		if (a[i] != x) cout << a[i]<<" ";
	return 0;	
}