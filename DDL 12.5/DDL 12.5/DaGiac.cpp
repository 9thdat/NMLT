#include "DaGiac.h"

int main()
{
	DaGiac TT;
	double DQ;
	double PT;
	double TN;
	int n;

	cout << "Nhap so diem cua Da Giac: ";
	cin >> n;

	DaGiac* QL = new DaGiac[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap thong tin diem thu " << i + 1 << " :";
		QL[i].Input();
	}

	cout << "Xuat thong tin da giac: ";
	for (int i = 0; i < n; i++)
	{
		cout << "\nThong tin diem thu " << i + 1 << " :";
		QL[i].Output();
	}

	cout << "\nNhap vecto dung de tinh tien: ";
	TT.Input();
	for (int i = 0; i < n; i++)
	{
		QL[i].TinhTien(TT);
	}
	cout << "\nDa giac sau khi tinh tien la: ";
	for (int i = 0; i < n; i++)
	{
		QL[i].Output();
	}

	cout << "\nNhap so do dung de quay: ";
	cin >> DQ;
	for (int i = 0; i < n; i++)
	{
		QL[i].Quay(DQ);
	}
	cout << "\nDa giac sau khi thuc hien phep quay la: ";
	for (int i = 0; i < n; i++)
	{
		QL[i].Output();
	}

	cout << "\nNhap so lan can phong to da giac: ";
	cin >> PT;
	for (int i = 0; i < n; i++)
	{
		QL[i].PhongTo(PT);
	}
	cout << "\nDa giac sau khi thuc hien phep phong to la: ";
	for (int i = 0; i < n; i++)
	{
		QL[i].Output();
	}

	cout << "\nNhap so lan can thu nho da giac: ";
	cin >> TN;
	for (int i = 0; i < n; i++)
	{
		QL[i].ThuNho(TN);
	}
	cout << "\nDa giac sau khi thuc hien phep thu nho: ";
	for (int i = 0; i < n; i++)
	{
		QL[i].Output();
	}

	return 0;
}