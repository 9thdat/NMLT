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

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s, MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}

//###INSERT CODE HERE -
void StringReverse(char st[MAX])
{
	int n = myStrlen(st, 0);
	char SM[MAX];
	int j = 0;
	int count = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		count++;
		if (st[i] == ' ')
		{
			for (int k = i; k < i + count; ++k)
			{
				SM[j] = st[k + 1];
				j++;
			}
			SM[j - 1] = ' ';
			count = 0;
		}
		if (i == 0)
		{
			for (int k = i; k < i + count; k++)
			{
				SM[j] = st[k];
				j++;
			}
		}
	}
	SM[n] = '\0';
	myStrcpy(st, 0, SM, 0);
}
void myStrcpy(char s[], int vt, char s1[], int k) {
	int len = myStrlen(s1, 0);
	for (int i = vt; i - vt + k <= len; i++) {
		s[i] = s1[i - vt + k];
	}
}
int myStrlen(char s[], int k) {
	int cnt = 0;
	for (int i = k; s[i] != NULL; i++) {
		cnt++;
	}
	return cnt;
}
int myStrcmp(char s1[], char s2[]) {
	int len1 = myStrlen(s1, 0), len2 = myStrlen(s2, 0);
	for (int i = 0; i < max(len1, len2); i++) {
		if (s1[i] > s2[i]) return 1;
		if (s1[i] < s2[i]) return -1;
	}
	return 0;
}
