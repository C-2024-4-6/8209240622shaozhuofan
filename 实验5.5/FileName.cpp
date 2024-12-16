#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int x=60, int y=80) {
		this->x = x, this->y = y;
	}
	void setpoint(int i, int j) {
		x += i;
		y += j;
	};
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point plus;
	plus.setpoint(12,20);
	plus.display();
	return 0;
}