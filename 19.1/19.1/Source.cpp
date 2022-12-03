/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
using namespace std;
#define MAXN 100
typedef struct PhanSo
{
    int ts, ms;
}PS;
int ucln(int a, int b)
{
	if (b == 0) return a;
	return ucln(b, a % b);
}
void Nhap (PS a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i].ts >> a[i].ms;
}
void Xuat(PS a[], int n)
{
		int tuso, mauso;
		for (int i = 0; i < n; i++)
		{
			if (a[i].ms == 0)
				cout << "Khong thoa yeu cau bai toan";
			else
			{
				tuso = a[i].ts / ucln(a[i].ts, a[i].ms);
				mauso = a[i].ms / ucln(a[i].ts, a[i].ms);
				if (mauso < 0) {
					tuso = -tuso;
					mauso = -mauso;
				}
				if (tuso % mauso == 0)
					cout << tuso / mauso;
				else
					cout << tuso << "/" << mauso;
			}
			cout << endl;
	}
}
int main() {
    PhanSo a[MAXN];
    int n;
    Nhap(a, n);
    Xuat(a, n);
    return 0;
}

