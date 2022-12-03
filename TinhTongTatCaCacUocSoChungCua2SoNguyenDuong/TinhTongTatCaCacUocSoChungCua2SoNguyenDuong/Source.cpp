/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
int input()
{
    int a;
    std::cin >> a;
	return a;
}
void input(int &b) 
{	
	std::cin >> b;
}
int ucln(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return a + b;
	}
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	return a;
}
int TongUocChung(int a, int b)
{	
	int k = ucln(a, b);
	int s = 0;
	for (int i = 1; i <= k; i = i + 1)
	{
		if (k % i == 0) s = s + i;
	}
	return s;
}

int main()
{
    int a, b;
    a = input();
    input(b);
    std::cout << TongUocChung(a, b);
    return 0;
}
