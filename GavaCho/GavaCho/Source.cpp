#include <iostream>
using namespace std;
int main()
{
	int x, y,z,soga,socho;
	cin >> x >> y;
	socho = (y - 2 * x) / 2;
	soga = x - socho;
	cout << soga << " " << socho;
	return 0;
}