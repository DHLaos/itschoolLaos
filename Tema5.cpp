#include <iostream>
using namespace std;

long prod(long n) {
	long i = 1;
	long a = 1;
	while (i <= n)
	{
		a *= i++;
	}
	return a;
}

int main() {
	long n;
	cin >> n;
	cout << prod(n);
	return 0;
}