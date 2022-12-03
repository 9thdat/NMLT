#include <iostream>
using namespace std;
#define n 5
int main()
{
	int M[n];
	cout << "Moi ban nhap cac gia tri cho phan tu:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "M[" << i << "]=";
		cin >> M[i];
	}
	cout << "Mang sau khi ban nhap:\n";
	for (int i = 0; i < n; i++)
	{
		cout << M[i] << "\t";
	}
	int k;
	cout << "Nhap K muon tim:";
	cin >> k;
	bool kq = false;
	for (int i = 0; i < n; i++)
	{
		if (M[i] == k)
		{
			kq = true;
			break;
		}
	}
	if (kq == true)
	{
		cout << "Tim thay" << k << "trong mang";
	}
	else
	{
		cout << "Khong tim thay" << k << "trong mang";
	}
	return 0;
}