#pragma once
class SoPhuc
{
	private:
		float iPhanThuc;
		float iPhanAo;
	public:
		void Input(SoPhuc&);
		SoPhuc Cong(SoPhuc);
		SoPhuc Tru(SoPhuc);
		SoPhuc Nhan(SoPhuc);
		SoPhuc Chia(SoPhuc);
		void Output();
};

