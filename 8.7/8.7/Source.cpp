/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
###End banned keyword*/

#include <iostream>
#include <cmath>
using namespace std;
bool isPrimeNumber(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            count++;
    if (count == 2)
        return true;
    return false;
}
bool isCommonDivisor(int a, int b, int n) {
    if (a % n == 0)
        if (b % n == 0)
            return true;
    return false;
}
int sum_common_prime(int m, int n) {
    int sum = 0, min = m;
    if (min > n) min = n;
    for (int i = 2; i <= min; i++)
        if (isCommonDivisor(m, n, i) == true)
            if (isPrimeNumber(i) == true) sum += i;
    if (sum > 0) return sum;
    return -1;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
