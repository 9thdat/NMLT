#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, dem = 0,so,sodautien;
	cin >> n;
	so = n;
	while (n != 0)
	{
		n = n / 10;
		dem = dem + 1;
	}
	sodautien = so;
	if (sodautien == 0) cout<<sodautien;
	while(so>0)
		{
			so = so % 10;
			cout << so << endl;
			sodautien = sodautien / 10;
			so = sodautien;
	}
	return 0;
}