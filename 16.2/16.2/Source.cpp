
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
string
###End banned keyword*/

#include<iostream>
#include<cstring>
using namespace std;

//###INSERT CODE HERE -
struct PROVINCE {
    int id;
    char name[20];
    int pop;
    float area;
};
void inputArrayProvinces(PROVINCE a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].id;
        cin.ignore();
        cin.getline(a[i].name,19);
        cin >> a[i].pop;
        cin >> a[i].area;
    }
}
void outputProvincesMore1MillionPop(PROVINCE a[], int& n)
{
    
    for (int i = 0; i < n; i++)
    {
        if (a[i].pop > 1000) {
            cout << a[i].id << "\t" << a[i].name << "\t" << a[i].pop << "\t" << a[i].area << endl;
        }
    }
}
int main()
{
    PROVINCE a[100];
    int n;

    inputArrayProvinces(a, n);

    cout << "ID\t|Province\t|Population\t|Area\n";
    outputProvincesMore1MillionPop(a, n);

    return 0;
}