#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
constexpr auto row = 5;
constexpr auto col = 5;
int main()
{
	srand(time(NULL));
	int M[row][col];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			M[i][j] = rand() % 100;
		}
	}
	cout << "Mang sau khi nhap ngau nhien:\n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << M[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "Nhap so dong ban muon xuat:";
		int r,z;
	cin >> r;
	for (int j = 0; j < col; j++)
	{
		cout << M[r][j] << "\t";
	}
	cout << "\nNhap so cot ban muon xuat:\n";
	cin >> z;
	for (int i = 0; i < col; i++)
	{
		cout << M[i][z]<<"\t";
	}
	if (row == col)
	{
		cout << "\nDuong cheo chinh:\n";
		for (int i = 0; i < row; i++)
			cout << M[i][i] <<"\t";
	}
	return 0;
}
