#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double f;
	double c;
	cout << "请输入华氏度" << endl;
	cin >> f;
	c = (f - 32) * 5.0/9.0;
	cout << fixed<< setprecision(2)<<"摄氏度为"<<c << endl;
	return 0;
}