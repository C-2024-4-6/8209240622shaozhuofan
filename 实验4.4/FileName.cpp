#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] <= list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    int m, n;
    int s1[80], s2[80], s3[160]; 

    cout << "请输入list1的元素个数：";
    cin >> m;
    cout << "请输入list1：";
    for (int i = 0; i < m; i++) {
        cin >> s1[i];
    }

    cout << "请输入list2的元素个数：";
    cin >> n;
    cout << "请输入list2：";
    for (int j = 0; j < n; j++) {
        cin >> s2[j];
    }

    merge(s1, m, s2, n, s3);

    cout << "合并后的数组为：";
    for (int i = 0; i < m + n; i++) {
        cout << s3[i] << " ";
    }
    cout << endl;

    return 0;
}