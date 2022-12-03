/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct DATE
{
    int day, month, year;
};
typedef struct STUDENT
{
    char id[11];
    char name[35];
    DATE dob;
    float math, phy, chem, aver;

} SV;

//###INSERT CODE HERE -
void inputArrayStudents(STUDENT a[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].id;
        cin.ignore();
        cin.getline(a[i].name, 35);
        cin >> a[i].dob.day;
        cin >> a[i].dob.month;
        cin >> a[i].dob.year;
        cin >> a[i].math;
        cin >> a[i].phy;
        cin >> a[i].chem;
    }
}
int findStudent(STUDENT a[], int &n, char name[])
{
    for (int i = 0; i < n; i++)
    {
        char* p = strstr(a[i].name,name );
        if (p != NULL)
        {
            return i;
        }
    }
    return -1;
}
void outputStudent(STUDENT a)
{
        a.aver = (a.math + a.phy + a.chem) / 3;
        cout << a.id << "\t|" << a.name << "\t|" << a.dob.day << "/" << a.dob.month << "/" << a.dob.year
            << "\t|" << a.math << "\t|" << a.phy << "\t|" << a.chem << "\t|" << a.aver << endl;
}
int main()
{
    STUDENT a[100];
    int n, i;
    char name[35];

    inputArrayStudents(a, n);

    cout << "\nFind a student with name: ";
    cin.ignore();
    cin.getline(name, 35);
    i = findStudent(a, n, name);
    if (i == -1) cout << "\nNo Found.";
    else
    {
        cout << "\nID\t|Fullname\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
        outputStudent(a[i]);
    }

    return 0;
}
