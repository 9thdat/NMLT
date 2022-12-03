#include <iostream>
using namespace std;
int countOneChar(char a[], char b, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (tolower(b) == tolower(a[i]))
			count++;
	return count - 1;
}
int main()
{
	int k = 0;
	int n;
	cin >> n;
	char a[100];
	int dem = 26;
	int count = 0;

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		count += countOneChar(a, a[i], n);
	}
	dem = dem - (n - count);
	cout << dem;
}