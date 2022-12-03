#include "Ve.h"
#include <iostream>

using namespace std;

void Ve::Input(int n)
{
	GiaVaoCong = 70;
	GiaMoiTro = 20;
	int n;
	cout << "Moi nhap vao so ve: ";
	cin >> n;
	Ve* QL = new Ve[n];
	for (int i = 0; i < n; i++)
		cin >> QL[i].SoTroChoi;
}

void Ve::Output()
{
	for (int i = 0; i < n; i++)
}
