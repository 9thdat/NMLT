#include <iostream>
#include <math.h>
using namespace std;
int main() {
	long double x, du;
	int b;
	cin >> x;
	du = x;
	while (du > 360)
	{
		b = du / 360;
		du = du - b*360;
	}
	if (0 < du && du <= 90)
		cout << 4;
	else if (90 < du && du <= 180)
		cout << 3;
	else if (180 < du && du <= 270)
		cout << 2;
	else if (du == 0 || 270<du && du <= 360)
		cout << 1;
	return 0;
}