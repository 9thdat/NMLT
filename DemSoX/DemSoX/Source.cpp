#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,x, dem=0; int arr[10000];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	cin >> x;
	for (int i = 1; i <= n; i++) 
		if (x == arr[i]) dem = dem + 1;
	cout << dem;
}