#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double f;
	double c;
	cout << "�����뻪�϶�" << endl;
	cin >> f;
	c = (f - 32) * 5.0/9.0;
	cout << fixed<< setprecision(2)<<"���϶�Ϊ"<<c << endl;
	return 0;
}