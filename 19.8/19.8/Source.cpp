/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)


using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

//###INSERT CODE HERE -
void Nhap(SinhVien A[MAXN], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].MASV;
        cin.ignore();
        cin.getline(A[i].HoTen, 50);
        cin >> A[i].NgaySinh >> A[i].GioiTinh >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
        A[i].DTB = (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3;
    }
}
void Xuat(SinhVien A[MAXN], int n)
{
    for (int i = 0; i < n; i++)
        if (strcmp(A[i].MASV, "0") != 0)
        {
            cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" << A[i].GioiTinh << "\t" << A[i].DiemToan
                << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa << "\t" << setprecision(3) << A[i].DTB << endl;
        }
}
void Nhap(char hoTenCanXoa[])
{
    cin.getline(hoTenCanXoa,50);
}
void XoaTheoHoTen(SinhVien A[], int n, char hoTenCanXoa[])
{   
    for (int i = 0; i < n; i++)
        if (strcmp(A[i].HoTen, hoTenCanXoa) == 0)
            strcpy(A[i].MASV,"0");

}
int main() {
    SinhVien A[MAXN];
    char hoTenCanXoa[100];
    int n;

    Nhap(hoTenCanXoa);

    Nhap(A, n);

    XoaTheoHoTen(A, n, hoTenCanXoa);

    Xuat(A, n);
    return 0;
}