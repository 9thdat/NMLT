#include <iostream>
using namespace std;
int main()
{
	int n, i;
	cin >> n;
			for (i = 2; i <= n; i += 2)
			cout << i << " ";
		cout << endl;
		if (n % 2 == 0)
		{
			for (i = n - 1; i > 0; i -= 2)
				cout << i << " ";
		}
		else
		{
			for (i = n; i > 0; i -= 2)
				cout << i << " ";
		}
		cout << endl << "Done";
	return 0;
}