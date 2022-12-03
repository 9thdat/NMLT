#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, x,y; int a[11];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	cin >> x;
	cin >> y;
	for (int i = 1; i <= n; i++)
		if (x == a[i]) a[i] = y;
	for (int i = 1; i <= n; i++)
		cout<<a[i]<<endl;
}