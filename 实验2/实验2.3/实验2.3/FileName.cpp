#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) { cout << "不能构成三角形" << endl; }
	else { if (a == b || b == c || a == c) { cout << "是等腰三角形" << endl; } else { cout << "不是等腰三角形" << endl; } }return 0;
}