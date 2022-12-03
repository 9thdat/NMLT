#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n; int arr[50];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	int t = arr[1];
	arr[1] = arr[n];
	arr[n] = t;
	for (int i = 1; i <= n; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}