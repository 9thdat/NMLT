/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
struct DATHUC
{
    DONTHUC *p;
    int n;
};
struct DONTHUC
{
    int coso;
    int mu;
};
DATHUC *Nhap()
{   
    int n;
    cin >> n;
    DATHUC* B = new DATHUC[n];
    for (int i = 0; i < n; i++)
        cin >> B[i].coso >> B[i].mu;
    return B;
}
void Xuat(DATHUC *B)
{
    for (int i = 0; B[i].coso != '\0'; i++)
    {
        if (B[i].coso == 0) break;
        else if (B[i].coso == 1) cout << "";
        else if (B[i].coso == -1) cout << "-";
        else cout << B[i].coso;
        if (B[i].mu == 0) break;
        else if (B[i].mu == 1) cout << "x";
        else cout << B[i].mu;
    }
}
double TinhDaThuc(DATHUC *B, double x)
{
    double s = 0;
    for (int i = 0; B[i].coso != '\0'; i++)
        s += B[i].coso * pow(x, B[i].mu);
}
int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
        << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}