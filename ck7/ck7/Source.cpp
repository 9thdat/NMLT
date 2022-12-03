/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/


#include <iostream>
using namespace std;


void inputMatrix(int a[][100], int &n);

void outputMatrix(int a[][100], int n);

/* Ham kiem tra ma tran tam giac duoi
 La ma tran tam giac duoi neu moi phan tu o ben tren duong cheo chinh bang 0*/
int isLowerTriangularmatrix(int a[][100], int n);



int main()
{
    int a[100][100];
    int n;
    inputMatrix(a, n);
    cout << "Matrix: " << endl;
    outputMatrix(a, n);

    //###INSERT CODE HERE -
    if (isLowerTriangularmatrix(a, n) == 1) cout << "\na is called an lower triangular matrix";
    return 0;
}
void inputMatrix(int a[][100], int& n)
{   
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> a[i][j];
}
int isLowerTriangularmatrix(int a[][100], int n)
{   
    for (int i = 0; i < n; i++)
        for (int j=0;j<n;j++)
        if (j>i)
        if (a[i][j] != 0) return 0;
    return 1;
}
void outputMatrix(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}
