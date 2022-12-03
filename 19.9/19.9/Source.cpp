/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/
#include <iostream>
#include <math.h>

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
Diem diemDoiXungQuaO(Diem N)
{
    N.x = -N.x;
    N.y = -N.y;
    return N;
}
long double	 DoDai(int x1, int x2, int y1, int y2)
{ 
    long double	 diem = sqrt(pow(x1 - y1, 2) + pow(x2 - y2, 2));
        return diem;
}
Diem khoangCachNhoNhat(Diem a[], int n, Diem M)
{
    Diem N;
    long double	 min = DoDai(a[0].x,a[0].y,M.x,M.y);
    N.x = a[0].x;
    N.y = a[0].y;
    for (int i = 0; i < n; i++)
        if (DoDai(a[i].x, a[i].y, M.x, M.y) - min < 0 )
        {
            min = DoDai(a[i].x, a[i].y, M.x, M.y);
                N.x = a[i].x;
                N.y = a[i].y;
        }
    return N;
}
int main()
{
    Diem a[100];
    int n;
    nhapDSDiem(a, n); // Nhap danh sach cach diem trong mat phang Oxy
    cout << "Danh sach diem trong mat phang Oxy:\n";
    xuatDSDiem(a, n); // Xuat danh sach cac diem, moi diem tren 1 dong

    Diem M, N;
    cout << "\nNhap mot diem de kiem tra khoang cach: ";
    cin >> M.x >> M.y;

    N = diemDoiXungQuaO(M);
    cout << "\nDiem doi xung voi (" << M.x << "," << M.y << ") qua goc toa do O: (" << N.x << "," << N.y << ")";

    N = khoangCachNhoNhat(a, n, M);
    cout << "\nDiem co khoang cach ngan nhat toi (" << M.x << "," << M.y << "): (" << N.x << "," << N.y << ")";


    return 0;
}