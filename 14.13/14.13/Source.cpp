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
int myStrcmp(char s1[], char s2[])
{
	int i = 0;
	while (s1[i] != 0) i++;
	return i;
}
int myStrlen(char s[], int k)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}
void Reverse(char s[], int start, int end)
{
	char rev[MAX] = { '\0' };
	int j = 0;
	for (int i = start; i < end; i++)
	{
		rev[j] = s[i];
		j++;
	}
	j = j - 1;
	for (int i = start; i < end; i++)
	{
		s[i] = rev[j];
		j--;
	}

}
void StringReverse(char st[])
{
	int end = 0, start = 0;
	while (st[end] != '\0') {
		for (end = start; st[end] != '\0' && st[end] != ' '; end++);
		Reverse(st, start, end);
		start = end + 1;
	}
}
void myStrcpy(char s[], int vt, char s1[], int k)
{
	for (int i = 0; i < myStrlen(s, 0); i++)
		s1[i] = s[i];
	s1[myStrlen(s1, 0)] = '\0';
}
