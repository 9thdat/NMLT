/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;


int Input()
{
	int n;
	cin >> n;
	return n;
}
int sum_even_divisor(int n)
{
	int s = 0;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i % 2 == 0)
				s = s + i;
		}
	}
	if (s > 0) return s;
	return -1;
}


int main() {
	int n;
	n = Input();
	cout << sum_even_divisor(n);
}
