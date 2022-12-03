/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
include
class
string
###End banned keyword*/
#pragma warning(disable : 4996)


#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

//###INSERT CODE HERE -
void Chuanhoa(char s[]) {
	int i = 0, dem = 0, n = strlen(s);
	while (s[i] == ' ')
	{
		dem++; i++; n--;
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
}
int main()
{
	char s[MAX];
	cin.getline(s, 299);
	char s1[MAX];
	strcpy(s1, s);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}
