#include<iostream>
using namespace std;
int main() {
	int a;
	int b;
	int c;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) { cout << "���ܹ���������" << endl; }
	else { if (a == b || b == c || a == c) { cout << "�ǵ���������" << endl; } else { cout << "���ǵ���������" << endl; } }return 0;
}