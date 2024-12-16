#include<iostream>
#include"student.h"
void Student::display() {
	cout << "num:" << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value() {
	cout << "please set the value:" << endl;
	cin >> num;
	cin >> name;
	cin >> sex;
}