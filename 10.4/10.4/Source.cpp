/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

//###INSERT CODE HERE -
#include <iostream>
using namespace std;
const int MAXR = 100;
const int MAXC = 100;
void NhapMaTran(int a[100][100], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}
bool isMaTranDonVi(int a[1000][100], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i != j) {
                if (a[i][j] != 0) return 0;
            }
            else if (a[i][i] != 1) return 0;
        }

    return 1;
}
int main() {
    int a[MAXR][MAXC], n;
    NhapMaTran(a, n);
    std::cout << std::boolalpha << isMaTranDonVi(a, n);
    return 0;                              
}
