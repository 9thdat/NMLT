/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>

using namespace std;
//Goi y: SV co the viet cac ham sau

long long Factorial(int n); // tinh n!
bool isFactorial(int n); // kiem tra n co phai la 1 so giai thua hay khong, nghia la co 1 con so i sao cho i!=n
int isTotalFactorial(int a[], int n); //kiem tra mang co phai chua toan so giai thua hay khong

//###INSERT CODE HERE -
long long Factorial(int n)
{
    if (n == 1) return 1;
    return n * Factorial(n - 1);
}
int maxFactorial(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > max && isFactorial(a[i]) == 1) max = a[i];
    return max;
}
void inputArray(int a[], int& n)
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
}
void outputArray(int a[], int n)
{
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}
bool isFactorial(int n)
{
    long long s = 0;
    if (n <= 0) return 0;
    for (int i = 1; i <= n; i++)
    {
        s = Factorial(i);
        if (s == n) return 1;
        else if (s > n) return 0;
    }
    return 0;
}
int isTotalFactorial(int a[], int n)
{   
    int count = 0;
    for (int i = 0; i < n; i++)
        if (isFactorial(a[i])==1) count++;
    if (count == n) return 1;
    return 0;
}
int main()
{
    int n, a[100];
    inputArray(a, n);
    cout << "Array:" << endl;
    outputArray(a, n);
    cout << endl;

    if (isTotalFactorial(a, n) == 1)
    {
        cout << "Mang toan so giai thua" << endl;
        cout << "So giai thua lon nhat: " << maxFactorial(a, n);
    }
    else cout << "Mang khong phai chua toan cac so giai thua";

    return 0;
}