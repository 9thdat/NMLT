/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
?
else
[
###End banned keyword*/

#include <iostream>

using namespace std;

int sumTwo(int a, int b)
{
	return a + b;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << "The sum of " << a << " and " << b << " is " << sumTwo(a, b);
}



