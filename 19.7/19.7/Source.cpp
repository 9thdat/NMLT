#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

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
void SapXepGiamTheoMASV(SinhVien A[MAXN], int n)
{   
    SinhVien temp;
    for (int i = 0; i < n - 1; i++) 
        for (int j = i + 1; j < n; j++) 
            if (strcmp(A[j].MASV, A[i].MASV)>0)
            {
                temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
}
void Xuat(SinhVien A[MAXN], int n)
{
    for (int i = 0; i<n;i++)
    {
        cout << A[i].MASV << "\t" << A[i].HoTen << "\t" << A[i].NgaySinh << "\t" << A[i].GioiTinh << "\t" << A[i].DiemToan
            << "\t" << A[i].DiemLy << "\t" << A[i].DiemHoa << "\t" << setprecision(3) << A[i].DTB << endl;
    }
}
int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}
