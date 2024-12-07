#include <iostream>
#include <cstring>
#include <cctype> 
using namespace std;


void count(const char s[], int counts[]);

int main() {
    const int SIZE = 26; 
    int counts[SIZE] = { 0 }; 
    char input[1000]; 
    cout << "Enter a string: ";
    cin.getline(input, 1000);

   
    count(input, counts);


    cout << "Non-zero counts:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        if (counts[i] != 0) {
            cout << char('a' + i) << ": " << counts[i] << endl;
        }
    }
     
    return 0;
}


void count(const char s[], int counts[]) {
    while (*s) { 
        char ch = tolower(*s); 
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;
        }
        s++;
    }
}