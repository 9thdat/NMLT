/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>

using namespace std;

void input(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}
void output(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void horizontal_invert(int a[1000][1000],int n, int m)
{
    int temp;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < m; j++) {
            temp = a[i][j];
            a[i][j] = a[n - 1 - i][j];
            a[n - 1 - i][j] = temp;
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;


    int a[100][100];

    input(a, n, m);

    horizontal_invert(a, n, m);

    output(a, n, m);

    return 0;
}
