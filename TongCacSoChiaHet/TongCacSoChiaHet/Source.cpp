#include <iostream>
using namespace std;
int main()
{
	int n, a, b,sum,i;
	cin >> n>>a>>b;
	sum = 0;
	for (i = 1; i <= n; i += 1)
	{
		if (i % a == 0 && i%b != 0) sum = sum + i;
		else continue;
	}
	cout << sum;
	return 0;
}