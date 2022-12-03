#include <iostream>
using namespace std;
char SNT(int n, int k)
{
    if (n < 2)
        return 0;
    else {
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0)
                return 0;
        return 1;
    }
}
int main()
{   
    int so[50], snt[50], dem = 0;
    int n, tong = 0;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> so[i];
    for (int i = 0; i < n; i++)
    {   
        int a = so[i];
        if (SNT(a, n) != 0)
        {
            tong += a;
            snt[dem] = a;
            dem++;
        }
    }
    if (tong == 0)
    {
        cout << "Khong co so nguyen to";
        return 0;
    }
    else 
    for (int i = 0; i < dem; i++)
    {
        if (tong % snt[i] == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}