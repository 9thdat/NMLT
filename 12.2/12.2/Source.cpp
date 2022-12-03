/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
new
string
###End banned keyword*/

#include <iostream>
#include <cstring>
using namespace std;

//###INSERT CODE HERE -
int countBlankSpace(char str[])
{
	int dem = 0;
	for (int i = 0; i < strlen(str); i++)
		if (str[i] == ' ') dem++;
	return dem;
}
void countUpperLower(char str[])
{
	int hoa = 0, thuong = 0;
	for (int i = 0; i < strlen(str); i++)
		if ('a' <= str[i] && str[i] <= 'z') thuong++;
		else if ('A' <= str[i] && str[i] <= 'Z') hoa++;
	cout << "\nSo ky tu hoa: " << hoa;
	cout << "\nSo ky tu thuong: " << thuong;
}
int main()
{

	char str[100], str1[100];
	cin.getline(str, 100);
	cout << "Chuoi: " << str;
	cout << "\nSo ky tu khoang trang: " << countBlankSpace(str);
	countUpperLower(str);



	return 0;
}