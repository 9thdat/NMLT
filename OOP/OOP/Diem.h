#pragma once
class Diem {
private:
	double x;
	double y;
public:
	Diem();
	~Diem();
	void setX(double);
	double getX();
	void setY(double);
	double getY();
	void input();
	void output();
	void process(double, double);
};