#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, a, b,k=1,l=1;
	double s1=0, s2=0,tichs2=1,tongs3=0,thuongs3=1, s3=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		s1 += pow(i, i);
		while (l <= n)
		{
			tichs2 = tichs2 * l;
			s2 = s2 + tichs2;
			l++;
		}		
		while (k <= n)
		{
			tongs3 = tongs3 + k;
			thuongs3 = 1/tongs3;
			s3 += thuongs3;
			k++;
		}
	cout << s1 << endl << s2 << endl << s3;
	return 0;
}