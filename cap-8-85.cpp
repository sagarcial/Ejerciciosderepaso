#include <iostream>
using namespace std;

const char hexDigits[] = "0123456789ABCDEF";

char intToHexDigit(int value) {
    return hexDigits[value];
}

int hexDigitToInt(char digit) {
    for (int i = 0; i < 16; ++i) {
        if (hexDigits[i] == digit)
            return i;
    }
    return -1; // Carácter inválido
}

char addHexDigits(char digit1, char digit2, int &carry) {
    int sum = hexDigitToInt(digit1) + hexDigitToInt(digit2) + carry;
    carry = sum / 16;
    return intToHexDigit(sum % 16);
}

char subHexDigits(char digit1, char digit2, int &borrow) {
    int diff = hexDigitToInt(digit1) - hexDigitToInt(digit2) - borrow;
    borrow = (diff < 0) ? 1 : 0;
    return intToHexDigit((diff + 16) % 16);
}

char* sumHex(char* hex1, char* hex2) {
    int length1 = strlen(hex1);
    int length2 = strlen(hex2);
    int maxLength = max(length1, length2);

    char* result = new char[maxLength + 2];
    result[maxLength + 1] = '\0';

    int carry = 0;

    for (int i = 0; i < maxLength; ++i) {
        char digit1 = (i < length1) ? hex1[length1 - i - 1] : '0';
        char digit2 = (i < length2) ? hex2[length2 - i - 1] : '0';

        result[maxLength - i] = addHexDigits(digit1, digit2, carry);
    }

    result[0] = intToHexDigit(carry);

    return result;
}

int main() {
    char hex1[100], hex2[100];

    cout << "Ingresa el primer número hexadecimal: ";
    cin >> hex1;

    cout << "Ingresa el segundo número hexadecimal: ";
    cin >> hex2;

    char* suma = sumHex(hex1, hex2);

    cout << "Suma hexadecimal: " << suma << endl;

    delete[] suma;

    return 0;
}
