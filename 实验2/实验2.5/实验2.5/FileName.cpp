#include<iostream>
using namespace std;
int main() {
	char c;
	int zimu = 0, kongge = 0, shuzi = 0, zifu = 0;
	cout << "请输入一行字符" << endl;
while((c=cin.get())!='\n')
if (isalpha(c)) { zimu++; }
else if (isspace(c)) { kongge++; }
else if (isdigit(c)) { shuzi++; }
else { zifu++;}
cout << "字母数为" << zimu << endl;
cout << "空格数为" << kongge << endl;
cout << "数字数为" << shuzi << endl;
cout << "字符数为" << zifu << endl;
return 0;
}
