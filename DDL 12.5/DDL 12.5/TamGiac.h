#include "DiemTamGiac.h"

	class TamGiac
	{
	private:
		DiemTamGiac A;
		DiemTamGiac B;
		DiemTamGiac C;
		DiemTamGiac VTTT;
		double Do;
		double PT;
		double TN;

	public:
		TamGiac()
		{

		};

		int Input()
		{
			int x = 0;
			cout << "Dinh thu nhat: ";
			A.DiemTamGiac::Input();
			cout << "Dinh thu hai:";
			B.DiemTamGiac::Input();
			cout << "Dinh thu ba:";
			C.DiemTamGiac::Input();

			int a = 0;
			int b = 0;
			int c = 0;
			
			a = A.DoDai(A, B);

			b = B.DoDai(B, C);

			c = C.DoDai(C, A);

			if (a + b > c) return 1;
			if (b + c > a) return 1;
			if (c + a > b) return 1;

			return 0;
		}

		void Output()
		{
			cout << "Dinh thu nhat: ";
			A.DiemTamGiac::Output();
			cout << "\nDinh thu hai: ";
			B.DiemTamGiac::Output();
			cout << "\nDinh thu ba: ";
			C.DiemTamGiac::Output();
		}

		void TinhTien(DiemTamGiac& VTTT)
		{
			cout << "\nNhap vecto chon de tinh tien: ";
			VTTT.Input();
			A.DiemTamGiac::TinhTien(VTTT);
			B.DiemTamGiac::TinhTien(VTTT);
			C.DiemTamGiac::TinhTien(VTTT);
		}

		void Quay(double& Do)
		{
			cout << "\nNhap so do de quay tam giac: ";
			cin >> Do;

			A.DiemTamGiac::Quay(Do);
			B.DiemTamGiac::Quay(Do);
			C.DiemTamGiac::Quay(Do);
		}

		void PhongTo(double& PT)
		{
			cout << "\nNhap so lan can phong to: ";
			cin >> PT;

			A.DiemTamGiac::PhongTo(PT);
			B.DiemTamGiac::PhongTo(PT);
			C.DiemTamGiac::PhongTo(PT);
		}

		void ThuNho(double& TN)
		{
			cout << "\nNhap so lan can thu nho: ";
			cin >> TN;

			A.DiemTamGiac::ThuNho(TN);
			B.DiemTamGiac::ThuNho(TN);
			C.DiemTamGiac::ThuNho(TN);
		}
	};