#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int n;
	cout << " Moi nhap do rong mang:";
	cin >> n;
	int i, j, t;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cout << "Nhap phan tu a" << i << "="; cin >> a[i]; cout << endl;
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j=i+1;j<n;j++)
			if (a[i] > a[j])
			{
				t = a[i]; a[i] = a[j]; a[j] = t;
			}
	}for (i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	return 0;
}