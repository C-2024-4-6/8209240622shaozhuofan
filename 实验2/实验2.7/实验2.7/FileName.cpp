#include<iostream>
using namespace std;
int main()
{
	int max = 5;
	for (int i = 1;i <= max;++i) {
		for (int j = 1;j <= max - i;++j) {
			cout << " ";
		}for (int k = 1;k <= i;++k) {
			cout << "*";

		}cout << endl;
	}
}