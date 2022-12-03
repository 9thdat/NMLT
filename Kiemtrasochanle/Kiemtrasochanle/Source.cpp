#include <iostream>
using namespace std;
int main()
{
	char c1, c2,viethoa;
	int x,kc;
	cin >> c1 >> c2 >> x;
	viethoa = toupper(c1);
	kc = int(c1) - int(c2);
	if (kc < 0) kc = -kc;
	cout << "Ma ASCII cua ky tu `" << c1 << "', `" << c2 << "' lan luot la " << int(c1) << " va " << int(c2) << endl;
	cout << "Khoang cach giua hai ky tu `" << c1 << "', `" << c2 << "' la " << kc << endl;
	cout << "Dang viet hoa cua ky tu `" << c1 << "' la `" << viethoa << "'" << endl;
	cout << x << " la ma ASCII cua ky tu `" << char(x)<<"'";
	return 0;
}
