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
	int a[10000];
	int n, dem = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++)
		if (a[i] == a[n - i - 1]) dem++;
	if (dem == n) cout << "array is palindrome";
	else cout << "array is not palindrome";
	return 0;
}
