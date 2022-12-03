#include<iostream> 
#include<math.h> 
using namespace std;
int main()
{
	int s, min1, min2, min11, tg;
	cin >> min1 >> min2 >> min11 >> s;
	tg = 1;
	while (tg <= 2 || s != 0)
	{
		s = s - min1;
		tg++;
	}
	while ( tg <= 10 || s != 0)
	{
		s = s - min2;
		tg++;
	}
	while (s != 0)
	{
		s = s - min3;
		tg++;
	}
	cout << tg;
	return 0;
}