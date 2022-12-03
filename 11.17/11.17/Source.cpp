/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
###End banned keyword*/

#include <iostream>

//###INSERT CODE HERE -

using namespace std;
int main()
{
	int a[2000], x, y, z, temp;
	cin >> x >> y;
	z = x + y;
	for (int i = 0; i < z; i++) cin >> a[i];
	for (int i = 0; i < z - 1; i++)
		for (int j = i + 1; j < z; j++)
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	for (int i = 0; i < z; i++) cout << a[i] << endl;
}