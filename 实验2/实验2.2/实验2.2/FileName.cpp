#include<iostream>
#include<cmath>
using namespace std;
int main() {
	double x;
	double y;
	cout << "ÇëÊäÈëx" << endl;
	cin >> x;
	if (1 > x && x > 0) {
		y = 3 - 2 * x;
		cout << y << endl;
	}

	else {
		if (1 <= x && x < 5) {
			y = 2 / 4 * x + 1;
			cout << y << endl;
		}
		else {
			if (5 <= x && x < 10) { y = pow(x, 2);cout << y; }
		}
	}
}