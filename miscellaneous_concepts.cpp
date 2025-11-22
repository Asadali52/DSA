#include <iostream>
using namespace std;

bool isPowerOf2(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int reverseIntegar(int n) {
    int reverseInt = 0;

    while (n != 0) {
        reverseInt = reverseInt * 10 + n % 10;
        n /= 10;
    }

    return reverseInt;
}

int main()
{

    // int a = 8, b = 8;
    // cout << (a & b) << endl; // bitwise and operator
    // cout << (a | b) << endl; // bitwise or operator
    // cout << (a ^ b) << endl; // bitwise xor operator

    // int x = 8 , y = 12;
    // cout << (x & y) << endl;
    // cout << (x | y) << endl;
    // cout << (x ^ y) << endl;

    // cout << (10 << 2) << endl; // bitwise left shift operator
    // cout << (4 << 1) << endl;
    // cout << (10 >> 2) << endl; // bitwise right shift operator
    // cout << (8 >> 2) << endl;

    // DATA TYOE MODIFIERS

    cout << sizeof(int) << endl;       // 4 bytes => 32 bits
    cout << sizeof(long int) << endl;  // 8 bytes => 64 bit (long increases size)
    cout << sizeof(short int) << endl; // 2 bytes => 16 (short decreses size)
    cout << sizeof(long long) << endl; // 8 bytes
                                       // SIGNED DATA TYPE CAN SOTRE +VE VALUE AS WELL AS -VE VALUE // UNSSIGNED ONLY STORES +VE VALUES

    unsigned int a = -10;
    cout << a << endl;

    // figure out how to find if a number is power of 2 ?
    cout << isPowerOf2(14) << endl; // false => 0
    cout << isPowerOf2(8) << endl;  // true => 1

    // WAF to reverse an integar
    cout << reverseIntegar(12345) << endl;

    return 0;
}