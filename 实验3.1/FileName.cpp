#include<iostream>
using namespace std;
int gys(int m,int n) {

	int t = 0;

while(n!=0) {
		t =m % n;
		m = n;
		n = t;
	

	}
	cout << "最大公约数为" << m;
	return m;
	
}
int gbs(int a,int b) {

	int c;
	c = (a * b) / gys(a, b);
	cout << "最小公倍数为" << c;
	return 0;

}
int main() {
	int m, n;
	cin >> m >> n;
	gbs(m, n);
	return 0;

}