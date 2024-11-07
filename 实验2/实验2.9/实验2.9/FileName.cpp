#include<iostream>
using namespace std;
int main()
{
	int a=2;
	
	double sum = 0;
	int day = 0;
		while (a <= 100) {
		
			sum += a*0.8;
			day++;
			a *= 2;
		}double c = 0;
		c = sum/day;
		cout << c << endl;

}