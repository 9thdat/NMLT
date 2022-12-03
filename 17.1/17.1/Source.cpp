/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
string
###End banned keyword*/

#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//###INSERT CODE HERE -
void input(char a[], int n)
{
	for (int i = 0; i < n; i++) cin >> a[i];
}
bool kiemtrachu(char a[], int j)
{
	for (int i = j; i < strlen(a); i++)
		if ('a' <= a[i] && a[i] <= 'z' || 'A' <= a[i] && a[i] <= 'Z')
			return 1;
	return 0;
}
void doimang(char a[], int i)
{
	for (int j = i; j < strlen(a) - 2; j++)
		a[j] = a[j + 1];
	a[strlen(a) - 1] = '\0';
}
void normalize(char a[])
{	
	int n = strlen(a);
	for (int i = 0; i < strlen(a); i++) a[i]=tolower(a[i]);
	for (int i = 0; i< strlen(a); i++)
		if (kiemtrachu(a,i)==1)
		{
			a[i]=toupper(a[i]); 
			break;
		}
	for (int i = 0; i < strlen(a); i++)
		if (a[i] == ' ' && a[i - 1] != ' ' && a[i + 1] == ' ') doimang(a, i);
	for (int i = 0; i < strlen(a); i++)
		if (a[i] != ' ' && a[i - 1] == ' ') a[i]=toupper(a[i]);
}
void output(char a[])
{
	for (int i = 0; i < strlen(a); i++) cout << a[i];
}
int main()
{
	char a[500];
	int n;
	cin >> n;
	input(a, n);
	normalize(a);
	output(a);
}
