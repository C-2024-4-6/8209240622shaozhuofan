#include<iostream>
using namespace std;
int main() {
	int n = 1;
	int t = 1;
	while (t < 10) {
		n = 2 * (n + 1);
			t++;
	}
	cout << "��һ����" << n << "����" << endl;
	return 0;
}