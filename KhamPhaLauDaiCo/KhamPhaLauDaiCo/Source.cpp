#include <iostream>
using namespace std;

int main() {
    int v1, w1, v2, w2, wm;
    cin >> v1 >> w1 >> v2 >> w2 >> wm;
    if (w1 + w2 <= wm) cout << v1 + v2;
    else if (v1 >= v2)
    {
        if (w1 <= wm) cout << v1;
        else if (w2 <= wm) cout << v2;
        else cout <<"0";
    }
            else if (v1 <= v2)
            {
                if (w2 <= wm) cout << v2;
                else if (w1 <= wm) cout << v1;
                else cout << "0";
            }
    return 0;
}