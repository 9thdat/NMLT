#include <iostream>
#include <iomanip>

int main()
{
	double x, y;
	std::cin >> x >> y;
	std::cout << std::setprecision(15);
	std::cout << double((x / y) / (3.6));
	return 0;
}