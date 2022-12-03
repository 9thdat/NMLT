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
        a[i].aver = (a[i].math + a[i].phy + a[i].chem) / 3;
    }
}
SV maxAverageScore(STUDENT a[], int n)
{
    SV mang=a[0];
    float max = a[0].aver;
    for (int i = 1; i < n; i++)
    {
        if (a[i].aver > max)
        {
            max = a[i].aver;
            mang = a[i];
        }
    }
    return mang;
}
void outputStudent(SV a)
{
    cout << a.id << "\t|" << a.name << "\t|" << a.dob.day << "/" << a.dob.month << "/" << a.dob.year
        << "\t|" << a.math << "\t|" << a.phy << "\t|" << a.chem << "\t|" << a.aver;
}
int main()
{
    STUDENT a[100];
    int n, i;
    char name[35];

    inputArrayStudents(a, n);


    cout << "\nThe student with the highest average score:\n ";
    cout << "ID\t|Fullname\t|Date of birth\t|Maths\t|Phys\t|Chemis\t|Average score\n";
    outputStudent(maxAverageScore(a, n));


    return 0;
}