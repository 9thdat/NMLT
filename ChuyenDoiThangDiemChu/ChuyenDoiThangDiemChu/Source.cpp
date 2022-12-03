#include <iostream>
using namespace std;

char courseGrade(int score)
{
    switch (score)
    {
    case 0: case 1: case 2: case 3: case 4: case 5: return  'F'; break;
    case 6: return  'D'; break;
    case 7: return  'C'; break;
    case 8: return  'B'; break;
    case 9: case 10: return  'A'; break;
    }
}
int main()
{
    int n, d;
    cin >> n;
    d = n / 10;
    cout << courseGrade(d);
}