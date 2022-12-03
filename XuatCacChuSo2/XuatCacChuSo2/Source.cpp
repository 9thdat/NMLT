#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	long double pi=0,i;
	cin >> n;
		for (i = 0; i <= n; i++)
		{
			pi += (pow(-1, i)) / (2 * i + 1);
		}
		pi = pi * 4;
		cout << pi;
	return 0;
}