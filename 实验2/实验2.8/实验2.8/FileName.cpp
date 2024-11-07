#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a;
	double b = 2.0;
	double c = 0;
	cout << "请输入一个数" << endl;
	cin >> a;

	while (fabs(b-c)>=pow(10,-5)) {
		c = (b + a / b) / 2;
		b = c;

	}cout << "平方根为" << c;
	return 0;
}
