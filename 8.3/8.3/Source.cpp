#include <iostream>
#include <math.h>
using namespace std;
bool isPrimeNumber(int n)
{
	if (n < 2)
		return false;
	else if (n == 2)
		return true;
	else {
		int count = 0;
		for (int i = 1; i <= n; i++)
			if (n % i == 0)
				count++;
		if (count == 2)
			return true;
		return false;

	}
}
void twinPrime(int n)
{
	int count = 0;
	for (int i = 3; i < n; i++)
	{
		if (isPrimeNumber(i) == true && isPrimeNumber(i - 2) == true) {
			cout << i-2 << ", " << i << endl;
			count++;
		}
	}
	cout <<"Tong: "<< count<<" cap so sinh doi < "<<n;
}

int main()
{
	int n;
	cin >> n;
	twinPrime(n);

	return 0;
}