/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
using namespace std;
typedef struct PhanSo
{
    int tuso, mauso;
}PS;
PS Chia(PS a, PS b)
{
    PS c;
    c.tuso = a.tuso * b.mauso;
    c.mauso = a.mauso * b.tuso;
    return c;
}
int UCLN(int a, int b)
{
    if (b == 0) return a;
    return UCLN(b, a % b);
}
void Xuat(PS Chia)
{
    if (Chia.tuso % Chia.mauso == 0) cout << Chia.tuso / Chia.mauso;
    else
    {
        int tuso = Chia.tuso; int mauso = Chia.mauso;
        int uc = UCLN(tuso, mauso);
        int a = Chia.tuso / uc;
        int b = Chia.mauso / uc;
        if (a>0&b < 0)
        {
            a = -a;
            b = -b;
        }
        cout << a << "/" << b;
    }
}
void Nhap(PS& a)
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
    Xuat(Chia(a, b));
    return 0;
}