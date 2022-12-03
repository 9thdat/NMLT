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

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];
	cin.getline(s, 299);

	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}

//###INSERT CODE HERE -
void myStrcpy(char s[], int vt, char s1[], int k)
{
	int n = myStrlen(s1, 0);
	for (int j = 0; j < n; j++)
    {
        s[j] = s1[j];
        s[myStrlen(s, 0) + 1] = '\0';
    }
}
int myStrlen(char s[], int k)
{
	int n = 0;
	while (s[n] != '\0') n++;
	return n;
}
void Chuanhoa(char s[]) {
    for (int i = 0; i < myStrlen(s, 0); i++)
        {
        if (s[i] == '.' && (s[i + 1] != ' ' && s[i + 1] != '\0'))
			{
                s[myStrlen(s, 0)+1]='\0';
                int n=myStrlen(s, 0);
				for (int j = n; j > i ; j--)
					s[j] = s[j - 1];
                    s[i + 1] = ' ';
			}
        if (s[i] == '.' && s[i - 1] == ' ')
                        while (s[i - 1] == ' ')
					{
					    int n=myStrlen(s, 0);
						for (int j = i-1; j < n - 1; j++)
							s[j] = s[j + 1];
						s[myStrlen(s, 0)-1]='\0';
						i--;
					}
        if (s[i] == '.' && s[i + 1] == ' ' && s[i + 2] == ' ')
            while (s[i + 1] == ' ' && s[i + 2] == ' ')
				{
				    int n=myStrlen(s, 0);
					for (int j = i+1; j < n - 1; j++)
						s[j] = s[j + 1];
					s[myStrlen(s, 0)-1]='\0';
				}

        }
}
