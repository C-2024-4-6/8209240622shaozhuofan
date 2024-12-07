#include <iostream>
#include <cctype> 
using namespace std;
int parseHex(const char* const hexString);

int main() {
    const char* hexString;
    int decimalNumber;

    cout << "������һ��16������: ";
    cin >>* hexString;


    decimalNumber = parseHex(hexString);


    std::cout << "16������ '" << hexString << "' ��Ӧ��10��������: " << decimalNumber << endl;

    return 0;
}


int parseHex(const char* const hexString) {
    int decimal = 0;
    int base = 1; 
    while (*hexString) {
        char c = *hexString++;

      
        if (c >= '0' && c <= '9') {
            decimal += (c - '0') * base;
            base *= 16;
        }
        else if (c >= 'A' && c <= 'F') {
            decimal += (c - 'A' + 10) * base;
            base *= 16;
        }
        else if (c >= 'a' && c <= 'f') {
            decimal += (c - 'a' + 10) * base;
            base *= 16;
        }
     
    }

    return decimal;
}