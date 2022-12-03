#include<iostream> 
#include<math.h> 
using namespace std;
int main()
{
	double x, y, tien = 0;
	cin >> x;
	if (0 < x && x <= 2) tien = x * 15000;
	else if (2 < x && x <= 6)
			tien = 30000 + (x - 2) * 11000;
	else if (6 < x)  tien = 96000 + (x - 6) * 11000;
	if (120 < x) tien = tien * 0.9;
	cout << tien;
	return 0;
}