#include<iostream>
using namespace std;
int main() {
	bool guizi[100];
	int i = 0;
	for (;i < 100;i++) {
		guizi[i] = false;
	}
	for (int j = 1;j <=100; j++) {
		for (i= j-1;i< 100;i+=j) {
			guizi[i] = !guizi[i];
		}
	}
	for (i = 0;i < 100;i++) {
		if (guizi[i] ==true) {
			cout << i+1<< " ";

		}
	}
	return 0;
}