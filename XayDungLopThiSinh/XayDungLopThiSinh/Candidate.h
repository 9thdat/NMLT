#pragma once
class Candidate
{
	private:
		int Ma;
		char Ten[25];
		int Ngay;
		int Thang;
		int Nam;
		float Toan;
		float Van;
		float Anh;
		float Tong = Toan + Van + Anh;
	public:
		void Input();
		void Output();
};

