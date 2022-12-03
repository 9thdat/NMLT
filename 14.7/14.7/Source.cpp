/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
string
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

//###INSERT CODE HERE -
void strtrim(char* str) {
	int start = 0;
	char* buffer = str;
	while (*str && *str++ == ' ') ++start;
	while (*str++);
	int end = str - buffer - 1;
	while (end > 0 && buffer[end - 1] == ' ') --end;
	buffer[end] = 0;
	if (end <= start || start == 0) return;
	str = buffer + start;
	while ((*buffer++ = *str++));
}
void Chuanhoa(char str[])
{
	strtrim(str);
	str[0] = toupper(str[0]);
	for (int i = 1; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			if (str[i - 1] == ' ')
				str[i] = toupper(str[i]);
			else
				str[i] = tolower(str[i]);
		}
	}
}
int main()
{
	char s[MAX];
	cin.getline(s, 299);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}