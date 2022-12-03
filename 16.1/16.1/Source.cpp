/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
include
###End banned keyword*/

#include <iostream>

using namespace std;

//###INSERT CODE HERE -
struct PhanSo {
    int tu, mau;
};
struct PS {
    int x, y;
};
struct DIEM {
    float x, y;
};
struct VECTOR {
    float x, y, z;
};
struct date {
    int ngay;
    char thang[10];
    int nam;
};
struct nhancong {
    char ten[20];
    char tinh[20];
    float bacluong;
    date ngaysinh;
};

int main()
{
    string test; cin >> test;

    PhanSo a = { 1,2 }; PS b;
    cout << a.tu << "/" << a.mau << endl;

    DIEM M = { 0.5,0.7 };
    cout << "(" << M.x << "," << M.y << ")" << endl;

    VECTOR P = { 1.2,0.3,1 };
    cout << "P(" << P.x << "," << P.y << "," << P.z << ")" << endl;

    nhancong nguoi_a = { "Hoang Nam","TP HCM",3.4,10,"Mot",1999 }, nguoi_b = { "Thuy Van","Dong Nai",4,21,"Muoi Hai",1990 }; 
    float S = nguoi_a.bacluong + nguoi_b.bacluong;//	
    cout << nguoi_b.ngaysinh.nam; 


    return 0;
}