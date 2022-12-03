/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cstdio>

using namespace std;

//###INSERT CODE HERE -
struct CB
{
    char ma[36];
    int ngay, thang,nam;
    float gio;
    char den[36];
};
void nhapDSChuyenBay(CB a[100], int& n)
{
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {   
        cin.getline(a[i].ma, 30);
        cin >> a[i].ngay >> a[i].thang >> a[i].nam;
        cin >> a[i].gio;
        cin.ignore();
        cin.getline(a[i].den,30);
    }
}
void xuatChuyenBayToiTinh(CB a[100], int n, string find)
{
    for (int i = 0; i < n; i++)
        if (strcmp(a[i].den, "Ha Noi") == 0)
            cout << a[i].ma << "\t" << a[i].ngay << "/" << a[i].thang << "/" << a[i].nam << "\t" << a[i].gio << "\t" << a[i].den << endl;
}
int main()
{
    CB a[100];
    int n;

    nhapDSChuyenBay(a, n); // Nhap danh sach cac chuyen bay


    cout << "Machuyen\t|Ngaybay\t|Giobay\t|Noiden\n";
    xuatChuyenBayToiTinh(a, n, "Ha Noi");

    return 0;
}