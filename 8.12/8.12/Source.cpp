#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n;
	char kitu;
TEST: {
	cout << "MENU" << endl;
	cout << "t) Tao ra bang cuu chuong" << endl;
	cout << "d) Thoat chuong trinh" << endl;
	cout << "Moi ban lua chon: ";
	cin >> kitu;
	}
if (kitu != 't' && kitu != 'd')
{
	cout << "\nLua chon khong hop le\n";
	goto TEST;
}
else if (kitu == 'd') cout << "\nBan da chon thoat khoi chuong trinh. Cam on ban da su dung!";
else if (kitu == 't')
{
	cout << "\nMoi ban nhap 1 so: ";
	cin >> n;
	while (n < 1 || n>9)
	{
		cout << "\nMoi ban nhap 1 so tu 1 den 9: ";
		cin >> n;
	}
	cout << "\nBANG CUU CHUONG: " << n << endl;
	for (int i = 1; i <= n + 1; i++)
		if (i == n + 1) goto TEST;
		else
			for (int j = 1; j <= 11; j++)
			{
				if (j <= 10)
				{
					if (i * j / 10 == 0) cout << "  " << i * j;
					else cout << " " << i * j;
				}
				else if (j == 11) cout << endl;
			}
}
return 0;
}