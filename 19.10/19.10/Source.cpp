/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/
#include <iostream>

using namespace std;

//###INSERT CODE HERE -
struct Diem
{
    int x, y;
};
void nhapDSDiem(Diem a[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i].x >> a[i].y;
}
void xuatDSDiem(Diem a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << "(" << a[i].x << "," << a[i].y << ")\n";
}
string gocPhanTu(Diem M)
{   
    if (M.x == 0 && M.y == 0) return  "la goc toa do";
    else if (M.x == 0 && M.y != 0) return "nam tren truc tung";
    else if (M.x != 0 && M.y == 0) return "nam tren truc hoanh";
    else if (M.x > 0 && M.y > 0) return "thuoc goc phan tu thu I";
    else if (M.x < 0 && M.y > 0) return "thuoc goc phan tu thu II";
    else if (M.x < 0 && M.y < 0) return "thuoc goc phan tu thu III";
    else if (M.x > 0 && M.y < 0) return "thuoc goc phan tu thu IV";
}
void gocPhanTu(Diem a[], int n)
{
    for (int i = 0; i < n; i++)
    {   
        cout << "(" << a[i].x << "," << a[i].y << ") ";
        if (a[i].x == 0 && a[i].y == 0) cout<<  "la goc toa do\n";
        else if (a[i].x == 0 && a[i].y != 0) cout << "nam tren truc tung\n";
        else if (a[i].x != 0 && a[i].y == 0) cout << "nam tren truc hoanh\n";
        else if (a[i].x > 0 && a[i].y > 0) cout << "thuoc goc phan tu thu I\n";
        else if (a[i].x < 0 && a[i].y > 0) cout << "thuoc goc phan tu thu II\n";
        else if (a[i].x < 0 && a[i].y < 0) cout << "thuoc goc phan tu thu III\n";
        else if (a[i].x > 0 && a[i].y < 0) cout << "thuoc goc phan tu thu IV\n";
    }
}
int main()
{
    Diem a[100];
    int n;
    nhapDSDiem(a, n); // Nhap danh sach cach diem trong mat phang Oxy
    cout << "Danh sach diem trong mat phang Oxy:\n";
    xuatDSDiem(a, n); // Xuat danh sach cac diem, moi diem tren 1 dong

    Diem M;
    cout << "\nNhap mot diem de kiem tra: ";
    cin >> M.x >> M.y;
    cout << "\nDiem (" << M.x << "," << M.y << ") " << gocPhanTu(M); //Kiem tra diem co nam tren cac truc toa do hoac thuoc goc phan tu thu may trong mat phang Oxy

    cout << "\nKiem tra toan bo danh sach diem da nhap:\n";
    gocPhanTu(a, n);

    return 0;
}
