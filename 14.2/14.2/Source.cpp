#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int dem = 0;
	getline(cin, a);
	while (a[0] == ' ')
	{
		a.erase(0, 1);
		dem++;
	}
	for (int i = 1; i < a.length() - dem; i++)
	{
		if (a[i] == ' ')
		{
			while (a[i + 1] == ' ') a.erase(i + 1, 1);
		}
	}
	cout << a;
}