#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cin >> n;
	i = 1;
	while (i <= n)
	{
		cout << "+ ";
		i++;
	}
	cout << endl;
	i = 1;
	while (i <= n)
	{
		cout << "- ";
		i++;
	}
	cout << endl;
	i = 1;
	while (i <= n)
	{
		cout << "+ - ";
		i++;
	}
	return 0;
}