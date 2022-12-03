/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
using namespace std;
struct PhanSo
{
    double tuso, mauso;
};
void Nhap(PhanSo &a)
{
    cin >> a.tuso >> a.mauso;
}
int ucln(int a, int b)
{
    if(b == 0) return a;
    return ucln(b, a % b);
}
int SoSanh(PhanSo a, PhanSo b)
{
    int ts, ms;
    ts = a.tuso * b.mauso - b.tuso * a.mauso;
    ms = a.mauso * b.mauso;
    int uc = ucln(ts, ms);
    double tuso = (double)ts / uc;
    double mauso = (double)ms / uc;
    double kq = tuso / mauso;
    if (kq > 0) return 1;
    else if (kq < 0) return -1;
    return 0;

}
PhanSo Nhap()
{
    PhanSo x;
    cin >> x.tuso >> x.mauso;
    return x;
}
int main() {
    PhanSo a, b;
    Nhap(a);
    b = Nhap();
    int kq = SoSanh(a, b);
    if (kq == 0)
        std::cout << "Hai phan so bang nhau.";
    else if (kq > 0)
        std::cout << "Phan so thu nhat LON hon phan so thu hai.";
    else
        std::cout << "Phan so thu nhat NHO hon phan so thu hai.";
    return 0;
}
