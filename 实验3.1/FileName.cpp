#include<iostream>
using namespace std;
int gys(int m,int n) {

	int t = 0;

while(n!=0) {
		t =m % n;
		m = n;
		n = t;
	

	}
	cout << "���Լ��Ϊ" << m;
	return m;
	
}
int gbs(int a,int b) {

	int c;
	c = (a * b) / gys(a, b);
	cout << "��С������Ϊ" << c;
	return 0;

}
int main() {
	int m, n;
	cin >> m >> n;
	gbs(m, n);
	return 0;

}