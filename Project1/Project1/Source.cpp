#include <iostream>
#include <math.h>
using namespace std;
int ktnamnhuan(int nam);
int kiemtra(int thang, int nam);
int main()
{
    int ngay, thang, nam;
    cin >> thang, nam;
    if ((thang < 1 && thang>12)&&(nam < 1975 && nam >2019)) 
        cout << "Thang khong hop le.Nam khong hop le."; 
    if (nam < 1975 && nam >2019) cout << "Nam khong hop le.";
    else if (thang < 1 && thang>12) cout << "Thang khong hop le.";
    else  cout << kiemtra(thang,nam);
    return 0;
}
int kiemtra(int thang, int nam) {
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if (ktnamnhuan(nam))
            return 29;
        else
            return 28;
    }
}
    int ktnamnhuan(int nam) 
    {
        return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
    }
