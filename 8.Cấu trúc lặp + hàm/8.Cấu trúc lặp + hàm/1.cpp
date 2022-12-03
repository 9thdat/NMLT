#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, i, a, b;
	cin >> x;
	i = x / 1000 + (x / 100 % 10) + (x % 100 / 10) + (x % 10);
	cout << i << ", ";
	if (i / 10 != 0)
	{
		a = i / 10;
		b = i % 10;
	}
	else
	{
		a = 0; b = i;
	}
	cout << a << ", " << b;
	return 0;
}