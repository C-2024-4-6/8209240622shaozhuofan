#include<iostream>
#include"colume.h"
using namespace std;
void Colume:: set_value() {
	cout << "please enter your colume data:" << endl;
	cout << "length:";
	cin >> length;
	cout << "width:";
	cin >> width;
	cout << "height:";
	cin >> height;
}
void Colume::volume() {
	v = length * width * height;
	cout << "the volume is" << v << endl;
}