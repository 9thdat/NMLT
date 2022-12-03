#include "Diem.h"
#include <iostream>
using namespace std;
Diem::Diem() {

}
Diem::~Diem() {

}
void Diem::setX(double a) {
	x = a;
}
double Diem::getX() {
	return x;
}
void Diem::setY(double b) {
	y = b;
}
double Diem::getY() {
	return y;
}
void Diem::input() {
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}
void Diem::output() {
	cout << "(" << x << ";" << y << ")";
}
void Diem::process(double d1, double d2) {
	x += d1;
	y += d2;
}