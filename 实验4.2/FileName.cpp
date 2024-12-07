#include<iostream>
using namespace std;
int main()
{
	double a[10];
	int n = 0;
	
	for (n = 0;n < 10;n++) {
		cin >> a[n];
	}
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < 9; j++)
			if (a[j] > a[j + 1])
			{
				double x=a[j] ;
				a[j] = a[j + 1];
				a[j + 1] = x;
				changed = true;
			}
	} while (changed);
	for (int i = 0;i < 10;i++) {
		cout << a[i] << " ";
}
	return 0;
}