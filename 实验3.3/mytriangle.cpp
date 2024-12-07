#include<iostream>
#include<cmath>
#include"mytriangle.h"
using namespace std;
bool is_vaild(double side1, double side2, double side3) {
	return side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2;
}
double _area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
		if(!is_vaild(side1, side2, side3)) {
			cout << "´íÎóÊý¾Ý" << endl;
			
		}return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}
