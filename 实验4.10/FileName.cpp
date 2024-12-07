#include <iostream>
using namespace std;
void sortArray(int* arr, int size);
void printArray(const int* arr, int size);

int main() {
    int* dynamicArray = nullptr;
    int size, value;

    cout << "请输入数组元素个数: ";
    cin >> size;

    dynamicArray = new int[size];

    std::cout << "请输入" << size << "个数组元素:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> value;
        dynamicArray[i] = value;
    }

    sortArray(dynamicArray, size);
    std::cout << "排序后的数组元素为:" << std::endl;
    printArray(dynamicArray, size);

    delete[] dynamicArray;

    return 0;
}

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    cout << endl;
}