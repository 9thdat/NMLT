/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
using namespace std;
typedef struct PhanSo
{
    int tuso, mauso;
}PS;
PS Cong(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso*b.mauso + b.tuso*a.mauso;
    c.mauso = a.mauso * b.mauso;
    return c;
}
int UCLN(int a, int b)
{
    if (b == 0) return a;
    return UCLN(b, a % b);
}
void Xuat(PS Cong)
{
    if (Cong.tuso % Cong.mauso == 0) cout << Cong.tuso / Cong.mauso;
    else
    {   
        int tuso = Cong.tuso; int mauso = Cong.mauso;
        int uc = UCLN(tuso, mauso);
        int a = Cong.tuso / uc;
        int b = Cong.mauso / uc;
        cout << a << "/" << b;
    }
}
void Nhap(PS &a)
{
    cin >> a.tuso >> a.mauso;
}
PS Nhap()
{
    PS b;
    cin >> b.tuso >> b.mauso;
    return b;
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    Xuat(Cong(a, b));
    return 0;
}