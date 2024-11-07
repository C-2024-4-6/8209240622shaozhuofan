#include<iostream>
using namespace std;
int main()
{
    int a,ao=0;
    int b,bo=0;
    int e;
    int c = 0;
    int d = 0;
  
    cout << "请输入两个数字" << endl;
    cin >> a;
    cin >> b;    ao = a;bo = b;
    while (b != 0)
    {
        e = b;
        b = a % b;
        a = e;
    }c = a;
    d = (ao* bo) / c;
;
    cout << "最大公约数是" << c << endl;
    cout << "最小公倍数是" << d << endl;
    return 0;
}
