#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n; int a[10000];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = n; i > 0; i--)
		cout << a[i] << "\n\n";
}