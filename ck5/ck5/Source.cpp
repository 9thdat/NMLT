#include <iostream>
using namespace std;
int main()
{
	int a[1000], b[1000], c[1000];
	int x, y, z = 0;
	cin >> x >> y;
	for (int i = 0; i < x; i++) cin >> a[i];
	for (int i = 0; i < y; i++) cin >> b[i];
	if (x > 0)
	{
		for (int i = 0; i < x; i++)
			c[i] = a[i];
		for (int i = x; i < x + y; i++)
		{
			c[i] = b[z];
			z++;
		}
	}
	else 
		for (int i = 0; i < y; i++)
			c[i] = b[i];
	for (int i = 0; i < x + y-1; i++)
	{
		for (int j=i+1;j<x+y;j++)
			if (c[j] < c[i])
			{
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
	}
	for (int i = 0; i < x + y; i++) cout << c[i] << " ";
}