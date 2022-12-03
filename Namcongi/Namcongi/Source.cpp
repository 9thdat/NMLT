
#include <iostream>
using namespace std;
int main()
{
    int nam;
    string ten;
    cin >> nam;
    if (nam < 0)
    {
        nam = -nam;
        switch (nam % 12)
        {
            case 9: ten = "TY'"; break;
            case 8: ten = "SUU"; break;
            case 7: ten = "DAN"; break;
            case 6: ten = "MEO"; break;
            case 5: ten = "THIN"; break;
            case 4: ten = "TY."; break;
            case 3: ten = "NGO"; break;
            case 2: ten = "MUI"; break;
            case 1: ten = "THAN"; break;
            case 0: ten = "DAU"; break;
            case 11: ten = "TUAT"; break;
            case 10: ten = "HOI"; break;
        }
    }
    else {
        switch (nam % 12)
        {
        case 4: ten = "TY'"; break;
        case 5: ten = "SUU"; break;
        case 6: ten = "DAN"; break;
        case 7: ten = "MEO"; break;
        case 8: ten = "THIN"; break;
        case 9: ten = "TY."; break;
        case 10: ten = "NGO"; break;
        case 11: ten = "MUI"; break;
        case 0: ten = "THAN"; break;
        case 1: ten = "DAU"; break;
        case 2: ten = "TUAT"; break;
        case 3: ten = "HOI"; break;
        }
    }
    cout << ten;
    return 0;
}


