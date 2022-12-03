#include <iostream>
using namespace std;
int main()
{
	int n,mid,mid1,mid2;
	int a[100000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	if (n % 2 == 0)
	{
		mid1 = (n / 2)-1;
		mid2 = (n / 2);
		if (a[0] == a[mid1] + a[mid2] && a[n-1]== a[mid1] + a[mid2]) cout << 1;
		else cout << 0;
	}
	else
	{
		mid = n / 2;
		if ( a[0] == a[mid] && a[mid]==a[n-1]) cout << 1;
		else cout << 0;
	}
}