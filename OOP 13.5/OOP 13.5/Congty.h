#pragma once
#include "NhanVien.h"
#include "NVQL.h"
#include "NVSX.h"
#include "NVVP.h"

using namespace std;
class Congty
{
private:
	Nhanvien** dsnv;
	int sl;
public:
	Congty() :dsnv(NULL), sl(0) {};
	~Congty() {};
	int Tong_luong();
	void Input();
	void Output();
	void Find_Name(const string);
};


