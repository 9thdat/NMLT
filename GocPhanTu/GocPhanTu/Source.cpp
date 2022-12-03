#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,a,b;
	string kitu;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		if (a > 0 && b > 0) kitu = "I";
		else if (a < 0 && b>0) kitu = "II";
		else if (a < 0 && b < 0) kitu = "III";
		else if (a > 0 && b < 0) kitu = "IV";
		else if (a == 0 && b != 0) kitu = "T";
		else if (a != 0 && b == 0) kitu = "H";
		else kitu = "O";
		cout << kitu << endl;
	}
	return 0;
}