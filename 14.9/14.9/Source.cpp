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

int myStrlen(char s[], int k); //Ham tra ve chieu dai chuoi s ke tu vi tri k
void myMemmove(char s[], int vt, int k); //Xoa k ky tu trong chuoi s, bat dau tu vi tri vt.
int myStrstr(char s[], char s1[]); //Tim chuoi s1 trong chuoi s, neu tim thay tra ve vi tri s1[0] trong chuoi s, khong tin thay tra ve -1
void Chuanhoa(char s[]);

int main()
{
	char s[MAX];
	cin.getline(s, 299);	//Nhap chuoi s
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

//###INSERT CODE HERE -
int myStrlen(char s[], int k)
{
	int n = 0, i = 0;
	while (s[i] != '\0')
	{
		n++; i++;
	}
	return n;
}
void Chuanhoa(char s[]) {
	int i = 0, dem = 0, n = myStrlen(s,dem);
	while (s[i] == ' ')
	{
		dem++; i++;
	}
	for (int i = 0; i < n; i++)
		s[i] = s[i + dem];
	for (int i = 0; i < n - 1; i++)
		if (s[i] == '.' && s[i + 1] != ' ')
		{
			for (int j = n; j > i + 1; j--)
				s[j] = s[j - 1];
			s[i + 1] = ' ';
			n++;
		}
	for (int i = 0; i < n - 1; i++)
		if (s[i] == ' ' && s[i + 1] == ' ')
		{
			for (int j = i; j < n - 1; j++)
				s[j] = s[j + 1];
			i--;
			n--;
		}
	for (int i = 1; i < n - 1; i++)
		if (s[i] == ' ' && s[i + 1] == '.')
		{
			for (int j = i; j < n - 1; j++)
				s[j] = s[j + 1];
			n--;
		}
	s[n] = '\0';
	s[0] = toupper(s[0]);
	for (int i = 1; i < n; i++)
		if (s[i] != ' ' && s[i - 1] == ' ') s[i] = toupper(s[i]);
		else s[i] = tolower(s[i]);
}