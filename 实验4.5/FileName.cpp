#include <iostream>
#include <cstring> 
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 > len2) return -1; 

    for (int i = 0; i <= len2 - len1; ++i) {
        bool found = true;
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                found = false;
                break;
            }
        }
        if (found) return i; 
    }
    return -1; 
}

int main() {
    const int MAX_SIZE = 1000;
    char s1[MAX_SIZE], s2[MAX_SIZE];

    cout << "�������һ���ַ���s1: ";
    cin.getline(s1, MAX_SIZE); 

    cout << "������ڶ����ַ���s2: ";
    cin.getline(s2, MAX_SIZE); 
    int index = indexOf(s1, s2);

    if (index != -1) {
        cout << "�ַ���s1���ַ���s2���Ӵ� "<< index << endl;
    }
    else {
        cout << "�ַ���s1�����ַ���s2���Ӵ���" << endl;
    }

    return 0;
}