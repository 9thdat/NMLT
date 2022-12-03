#include <iostream>
using namespace std;
const double pi = 3.14;
int main{
	cout<<"Chuong trinh tinh chu vi tam giac"<<\n;
double r;
double chuvi,dientich=0;
cout<<"Moi nhap ban kinh r="<<endl;
cin>>r;
chuvi=2*pi*r;
dientich=pi*r*r;
cout << "Chu vi la "<<chuvi<< endl;
cout << "Dien tich la" << dientich << endl;
return 0;
}