#include <iostream>
using namespace std;
int main()
{
	int a[1000];
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	if (n < 1)
	{
		cout << "Mang rong.";
		return 0;
	}
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
	for (int i = 0; i < n; i++)
	{	
		if ((a[i] == 0 || a[i] == 1)&&i%2!=0)
		{
			cout << a[i] << " ";
			count++;
		}
		else 
		for (int j=1; j<=a[i];j++) 
			if (j * j == a[i] && i%2!=0)
			{
				cout << a[i] << " ";
				count++;
			}
	}
	if (count == 0)
	{
		cout << "Mang khong chua so chinh phuong.";
		return 0;
	}
	else 
	cout << endl << count;
}