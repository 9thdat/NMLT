#include <iostream>
#include <string.h>
using namespace std;
int main()
{
		char s[10000]; cin.getline(s, 10000);
		for (int i = 0; i < strlen(s); i++)
		{
			if ('a' <= s[i] && s[i] <= 'z') s[i] = toupper(s[i]);
			else if ('A' <= s[i] && s[i] <= 'Z') s[i] = tolower(s[i]);
		}
		cout << s;
		return 0;
}