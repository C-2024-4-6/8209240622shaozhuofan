#include<iostream>
using namespace std;
int main() {
	double a;
	double b;
	double c=0;
	char yunsuanfu;
	cout << "����a" << endl;
	cin >> a;
	cout << "����Ҫ���������㣿" << endl;
	cin >> yunsuanfu;
	cout << "����b" << endl;
	cin >> b;
	switch (yunsuanfu) {
	case'+':
		c = a + b;cout << "=" << c << endl;
		break;
	case'-':
		c = a - b;cout << "=" << c << endl;
		break;
	case'*':
		c = a * b;cout << "=" << c << endl;
		break;
	case'/':
		if (b == 0) {
			cout << "����" << endl;break;
		}	return c = a / b;cout << "=" << c << endl;break;
	case'%':
		if (b == 0) { cout << "����" << endl; break; }
		return c = static_cast<int>(a) % static_cast<int>(b);cout << "=" << c << endl;break;
		
	}
	return 0;
}