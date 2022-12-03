#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a, b;
    double x;
    cin >> a >> b;
    cout << setprecision(6);
    if (a == 0 && b == 0)
        cout << "Phuong trinh 0x+0=0 co vo so nghiem";
    else if (a == 0 && b != 0)
    {
        if (b > 0)
            cout << "Phuong trinh 0x+" << b << "=0 vo nghiem";
        else
            cout << "Phuong trinh 0x" << b << "=0 vo nghiem";
    }
    else
    {
        x = ((double)-b / a);
        if (b == 0)
            cout << "Phuong trinh " << a << "x+0=0 co 1 nghiem x = " << x;
        else if (b > 0)
            cout << "Phuong trinh " << a << "x+" << b << "=0 co 1 nghiem x = " << x;
        else cout << "Phuong trinh " << a << "x" << b << "=0 co 1 nghiem x = " << x;
    }
    return 0;
}
