#include<iostream>
#include<cstring>
using namespace std;
struct PROVINCE
{
    int id;
    char name[100];
    int pop;
    double area;
};

void input(PROVINCE* a, int& n)
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].id;
        cin.ignore();
        cin.getline(a[i].name, 100);
        cin >> a[i].pop;
        cin >> a[i].area;
    }

}

string output(PROVINCE* a, int n, char* last)
{
    int max = 0, diachi;
    for (int i = 0; i < n; i++)
    {
        if (a[i].area > max)
        {
            max = a[i].area;
            diachi = i;
        }
    }
    if (strstr(a[diachi].name, last))
        return "YES";
    else
        return "NO";
}

int main()
{
    PROVINCE a[100];
    int n;

    input(a, n);

    cin.ignore();
    char last[30];
    cin.getline(last, 30);
    cout << output(a, n, last);
    return 0;
}