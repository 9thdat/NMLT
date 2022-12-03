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

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
    char s[MAX];
    cin.getline(s, 299);
    if (myStrcmp(s, "") == 0)
        cout << "Chuoi rong." << endl;
    else
        DemTieng(s);
    return 0;
}

//###INSERT CODE HERE -

void InsertAtKPosition(char s[], char s1[], int k) {
    int len1 = myStrlen(s1, 0), len = myStrlen(s, 0);
    for (int i = len + len1 - 1; i >= k + len1; i--) {
        s[i] = s[i - len1];
    }
    for (int i = k; i - k < len1; i++) {
        s[i] = s1[i - k];
    }
    s[len1 + len] = NULL;
}
void DemTieng(char s[]) {
    int i = 0;
    int lens = myStrlen(s, 0);
    while (s[i] != NULL) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            myMemmove(s, i + 1, 1);
        }
        else i++;
    }
    while (s[0] == ' ' || s[lens - 1] == ' ') {
        if (s[0] == ' ') myMemmove(s, 0, 1);
        if (s[lens - 1] = ' ') s[lens - 1] = NULL;
        lens = myStrlen(s, 0);
    }
    char ss[MAX], ht[100];
    s[lens] = ' '; s[lens + 1] = NULL;
    InsertAtKPosition(s, " ", 0);
    lens += 2;
    i = 0;
    while (myStrlen(s, 0) != 1) {
        i++;
        if (s[i] == ' ') {
            int cnt = 1;
            mySubstr(s, 0, i + 1, ss);
            mySubstr(s, 1, i - 1, ht);
            myMemmove(s, 0, i);
            int pos = myStrstr(s, ss);
            while (pos != -1) {
                cnt++;
                myMemmove(s, pos, i);
                pos = myStrstr(s, ss);
            }
            i = 0;
            cout << ht << ": " << cnt << endl << endl;
        }
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
void myStrcpy(char s[], int vt, char s1[], int k) {
    int len = myStrlen(s1, 0);
    for (int i = vt; i - vt + k <= len; i++) {
        s[i] = s1[i - vt + k];
    }
}
void myMemmove(char s[], int vt, int k) {
    int lens = myStrlen(s, 0);
    if (vt + k >= lens) s[vt] = NULL;
    else
        for (int i = vt; i <= lens; i++) {
            s[i] = s[i + k];
        }
}
int myStrstr(char s[], char s1[]) {
    int len1 = myStrlen(s1, 0), vt = -1;
    bool kt;
    for (int i = 0; s[i] != NULL; i++) {
        if (s[i] == s1[0]) {
            kt = true;
            for (int j = 1; j < len1; j++) {
                if (s[j + i] != s1[j]) {
                    kt = false;
                    break;
                }
            }
            if (kt == true) {
                return i;
            }
        }
    }
    return vt;
}
void mySubstr(char s[], int b, int count, char ss[]) {
    for (int i = 0; i <= count; i++) {
        ss[i] = NULL;
    }
    for (int i = b; i < b + count; i++) {
        ss[i - b] = s[i];
    }
}
bool myStrcat(char s1[], char s2[]) {
    int len1 = myStrlen(s1, 0), len2 = myStrlen(s2, 0);
    for (int i = len1; i <= len1 + len2; i++) {
        s1[i] = s2[i - len1];
    }
    return true;
}
