#include<iostream>
using namespace std;
int main() {
	char zifu;
	cout << "请输入一个字符" << endl;
	cin >> zifu;
	if (zifu >= 'a' && zifu <= 'z') {
		zifu = zifu - 'a' + 'A';
		cout << "大写字母为" << zifu << endl;
	}
	else { cout << "后继字符ASCII码值为" << static_cast<int>(zifu + 1) << endl; }return 0;
}