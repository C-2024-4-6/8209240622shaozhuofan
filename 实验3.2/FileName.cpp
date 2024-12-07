#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num) {
	int n=2;
	while (n * n <= num) {
		if (num % n == 0)return false;
		n++;
	}return true;
}
int main() {
	int a = 2;
	int b = 0;
	int c = 0;
	for (a > 1;b < 201;) {
		if (is_prime(a)) {
			cout << a << " ";
			b++;
			c++;
		}a++;
		if (c % 10 == 0) { cout << endl; }
	}
	return 0;
}