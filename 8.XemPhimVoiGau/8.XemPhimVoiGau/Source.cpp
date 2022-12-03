#include <iostream>
#include <math.h>
using namespace std;
int ucln(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
        while (a != b) {
            if (a > b) {
                a -= b;
            }
            else {
                b -= a;
            }
        }
        return a;
}
int main()
{
	int h, m, s, hx, mx, sx, tg, tgx;
	double ts, ms;
	cin >> h >> m >> s >> hx >> mx >> sx;
	tg = h * 3600 + m * 60 + s;
	tgx = hx * 3600 + mx * 60 + sx;
	ts=tgx/ucln(tgx, tg);
	ms = tg / ucln(tgx, tg);
	cout << ts << " " << ms;
	return 0;
}
