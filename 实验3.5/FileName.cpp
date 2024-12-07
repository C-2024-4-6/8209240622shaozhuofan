#include<iostream>
using namespace std;
int main() {
	int n = 1;
	int t = 1;
	while (t < 10) {
		n = 2 * (n + 1);
			t++;
	}
	cout << "第一天有" << n << "个桃" << endl;
	return 0;
}