#include<iostream>
using namespace std;
int main() {
	char c;
	int zimu = 0, kongge = 0, shuzi = 0, zifu = 0;
	cout << "������һ���ַ�" << endl;
while((c=cin.get())!='\n')
if (isalpha(c)) { zimu++; }
else if (isspace(c)) { kongge++; }
else if (isdigit(c)) { shuzi++; }
else { zifu++;}
cout << "��ĸ��Ϊ" << zimu << endl;
cout << "�ո���Ϊ" << kongge << endl;
cout << "������Ϊ" << shuzi << endl;
cout << "�ַ���Ϊ" << zifu << endl;
return 0;
}
