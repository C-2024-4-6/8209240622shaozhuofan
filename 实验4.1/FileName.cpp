#include<iostream>
using namespace std;
int main() {
	int num[10];
	int n;
	int i, j;
	for (n = 0;n < 10;n++) {
		cin >> num[n];
	}
	for (i = 0;i <10;i++) {
		for (j =i+1;j <10;j++) {
			if (num[i]==num [j]) {
				cout << num[i];
			}
	
		}
	}
	cout << endl;
	return 0;

}