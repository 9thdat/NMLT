/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
int kiemtra(char a[], int n)
{
	for (int i = 0; i < n; i++)
		if ('0' <= a[i] && a[i] <= '9') return -1;
	return 0;
}
int demsokitu(char a[])
{
	int dem=-1;
	while (a[dem] != '\0')	
		dem++;
	return dem;
}
int main()
{
	char a[MAX];
	int n;
	cin.getline(a, 299);
	n = demsokitu(a);
	if (kiemtra(a, n) == -1) cout << "CHUOI KHONG HOP LE.";
	else
		for (int i = 0; i < n; i++) cout << a[i];
	return 0;
}
//###INSERT CODE HERE -