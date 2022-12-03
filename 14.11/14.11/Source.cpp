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

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	cin.getline(s, 299);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}
int myStrlen(char s[], int pos)
{
    int count = 0;
    for (int i = 0; ; i++)
    {
        if (s[i] != '\0')
            count++;
        else
            break;
    }
    return count;
}

void myStrcpy(char s[], int vt, char s1[], int k)
{
    int n = myStrlen(s1, 0);
    for (int i = vt; i < n; i++)
    {
        s[k] = s1[i];
        k++;
        s[myStrlen(s, 0) + 1] = '\0';
    }

}

void InsertSpace(char* s, int pos)
{
    int n = myStrlen(s, 0);
    for (int i = n; i > pos; i--)
        s[i] = s[i - 1];
}

void DeleteSpace(char* s, int pos)
{
    int n = myStrlen(s, 0);
    for (int i = pos; i < n - 1; i++)
        s[i] = s[i + 1];
}

void Chuanhoa(char s[299])
{
    for (int i = 0; i < myStrlen(s, 0); i++)
    {
        if (s[i] == '.' && s[i + 1] != ' ' && s[i + 1] != '\0')
        {
            s[myStrlen(s, 0) + 1] = '\0';
            InsertSpace(s, i);
            s[i + 1] = ' ';
        }
        if (s[i] == '.' && s[i + 1] == ' ' && s[i + 2] == ' ')
            while (s[i + 1] == ' ' && s[i + 2] == ' ')
            {
                DeleteSpace(s, i + 1);
                s[myStrlen(s, 0) - 1] = '\0';

            }
        if (s[i] == '.' && s[i - 1] == ' ')
            while (s[i - 1] == ' ')
            {
                DeleteSpace(s, i - 1);
                s[myStrlen(s, 0) - 1] = '\0';
                i--;
            }
    }

}