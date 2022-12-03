#include <iostream>
using namespace std;
int isSumOfConsecutive(int n)
{
    int dem=0,s;
    for (int i = 1; i < n; i++)
    {
        s = 0;
        for (int j = i; j < n; j++)
        {
            s += j;
            if (s == n) dem++;
        }
    }
    return dem;
}
int main()
{
    int n; cin >> n;
    cout << isSumOfConsecutive(n) << endl;
    return 0;
}

