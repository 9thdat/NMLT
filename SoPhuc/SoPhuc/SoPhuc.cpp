#include "SoPhuc.h"
#include <iostream>
#include <math.h>

using namespace std;

void SoPhuc::Input(SoPhuc &SP2)
{
	cout << "Nhap so phuc dau tien: ";
	cout << "\n\tMoi ban nhap phan thuc: ";
	cin >> this->iPhanThuc;
	cout << "\tMoi ban nhap phan ao: ";
	cin >> this->iPhanAo;
	cout << "\nNhap so phuc thu hai: ";
	cout << "\n\tMoi ban nhap phan thuc: ";
	cin >> SP2.iPhanThuc;
	cout << "\tMoi ban nhap phan ao: ";
	cin >> SP2.iPhanAo;
}

SoPhuc SoPhuc::Cong(SoPhuc SP2)
{
	SoPhuc KQ;

	KQ.iPhanThuc = this->iPhanThuc + SP2.iPhanThuc;
	KQ.iPhanAo = this->iPhanAo + SP2.iPhanAo;
	cout << "\nPhep cong: ";
	return KQ;
}

SoPhuc SoPhuc::Tru(SoPhuc SP2)
{
	SoPhuc KQ;

	KQ.iPhanThuc = this->iPhanThuc - SP2.iPhanThuc;
	KQ.iPhanAo = this->iPhanAo - SP2.iPhanAo;
	cout << "Phep tru: ";
	return KQ;
}

SoPhuc SoPhuc::Nhan(SoPhuc SP2)
{
	SoPhuc KQ;

	KQ.iPhanThuc = this->iPhanThuc * SP2.iPhanThuc - this->iPhanAo * SP2.iPhanAo;
	KQ.iPhanAo = this->iPhanThuc * SP2.iPhanAo + this->iPhanAo * SP2.iPhanThuc;
	cout << "Phep nhan: ";
	return KQ;
}

SoPhuc SoPhuc::Chia(SoPhuc SP2)
{
	SoPhuc KQ;

	KQ.iPhanThuc = (this->iPhanThuc * SP2.iPhanThuc + this->iPhanAo * SP2.iPhanAo) / (pow(SP2.iPhanThuc, 2) + pow(SP2.iPhanAo, 2));
	KQ.iPhanAo = (SP2.iPhanThuc * this->iPhanAo - this->iPhanThuc * SP2.iPhanAo) / (pow(SP2.iPhanThuc, 2) + pow(SP2.iPhanAo, 2));
	cout << "Phep chia: ";
	return KQ;
}

void SoPhuc::Output()
{
	cout << this->iPhanThuc;
	if (this->iPhanAo >= 0) cout << "+" << this->iPhanAo << "i";
	else cout <<this->iPhanAo << "i";
	cout << endl;
}

int main()
{	
	SoPhuc SP1;
	SoPhuc SP2;
	SoPhuc KQCong;
	SoPhuc KQTru;
	SoPhuc KQNhan;
	SoPhuc KQChia;

	SP1.Input(SP2);

	KQCong = SP1.Cong(SP2);
	KQCong.Output();

	KQTru = SP1.Tru(SP2);
	KQTru.Output();

	KQNhan = SP1.Nhan(SP2);
	KQNhan.Output();

	KQChia = SP1.Chia(SP2);
	KQChia.Output();

}