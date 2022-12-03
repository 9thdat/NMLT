#include <iostream>
#include <string>
using namespace std;

int TinhTong(int a = 0, int b = 1);
int main()
{
	int x = 6, y = 7;
	cout << "Tong cua " << x << " va " << y << " la: " << TinhTong(x, y) << endl;
	cout << "Tong khi truyen vao mot tham so: " << TinhTong(x) << endl;
	cout << "Tong khi khong truyen tham so nao: " << TinhTong() << endl;
	system("pause");
	return 0;
}
int TinhTong(int a, int b)
{
	return a + b;
}