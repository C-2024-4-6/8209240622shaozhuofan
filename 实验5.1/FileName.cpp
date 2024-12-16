#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int second;
public:
	Time(int hour, int minute, int second ){
		this->hour = hour, this->minute = minute, this->second= second;
	}
	void show() {
		cout << "the time is" << hour << "," << minute << "," << second;
	}
};
int main() {
	int h;
	int m;
	int s;
	cout << "please settime";
	cin >> h >> m >> s;
	Time t1(h,m,s);
	t1.show();
	return 0;

}