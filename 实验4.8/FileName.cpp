
#include <iostream>
#include <cstring>
using namespace std;

int indexof(const char* s1, const char* s2);

int main() {
    char s1[100], s2[100]; 
    int index;

 
    cout << "�������ַ���s1: ";
    cin.getline(s1, 100);
cout << "�������ַ���s2: ";
 cin.getline(s2, 100); 

    index = indexof(s1, s2);

    if (index != -1) {
        cout << "�ַ��� '" << s1 << "' ���ַ��� '" << s2 << "' �е�һ�γ��ֵ�λ����: " << index << endl;
    }
    else {
        cout << "�ַ��� '" << s1 << "' �����ַ��� '" << s2 << "' ���Ӵ�" << endl;
    }

    return 0;
}


int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

  
    if (len1 > len2) return -1;

 
    for (int i = 0; i <= len2 - len1; ++i) {
        int j;
        for (j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
       
        if (j == len1) return i;
    }


    return -1;
}