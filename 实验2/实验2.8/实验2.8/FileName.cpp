#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a;
	double b = 2.0;
	double c = 0;
	cout << "������һ����" << endl;
	cin >> a;

	while (fabs(b-c)>=pow(10,-5)) {
		c = (b + a / b) / 2;
		b = c;

	}cout << "ƽ����Ϊ" << c;
	return 0;
}
