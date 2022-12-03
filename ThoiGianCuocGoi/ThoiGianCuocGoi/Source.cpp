#include<iostream> 
#include<math.h> 
using namespace std;
int main()
{
	int s, min1, min2, min11, tg;
	cin >> min1 >> min2 >> min11 >> s;
	tg = 0;
	if (s >= min1)
	{
		{
			s = s - min1;
			tg++;
		}
		while (tg < 10 && s >= min2)
		{
			s = s - min2;
			tg++;
		}
		if (tg>=10 && s >= min11) tg = tg + (s / min11);
	}
	cout << tg;
	return 0;
}