#include<iostream>
using namespace std;
int main() {
	char zifu;
	cout << "������һ���ַ�" << endl;
	cin >> zifu;
	if (zifu >= 'a' && zifu <= 'z') {
		zifu = zifu - 'a' + 'A';
		cout << "��д��ĸΪ" << zifu << endl;
	}
	else { cout << "����ַ�ASCII��ֵΪ" << static_cast<int>(zifu + 1) << endl; }return 0;
}