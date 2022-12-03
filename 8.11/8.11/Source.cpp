/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
using namespace std;

void tamGiacVuong_5()
{
    int h;
    cin >> h;
    if (h < 3 || h>10) cout << "Khong thoa dieu kien nhap.";
    else {
        for (int i = 1; i <= h; i++)
        {
            if (i == h)
                for (int k = 1; k <= h; k++) cout << "* ";
            else 
            for (int j = 1; j <= h + 1; j++)
            {
                if (j == i || j == 1) cout << "* ";
                else if (j == h + 1) cout << endl;
                else cout << "  ";
            }
        }
    }
}
int main()
{

    tamGiacVuong_5();
    return 0;
}