#include <iostream>
using namespace std;

// binary numbers => 0 1
// decimal numbers 0 1 2 3 4 5 6 7 8 9

// CONVERSION
// Decimal to Binary

// 42 => 101010 => this comes by taking LCM of 42 and remainder will be added 
// 42 / 2 => 21 =>  remainder 0;
// 21 / 2 => 10 => remainder 1;
// 10 / 2 => 5 => remainder 0;
// 5 / 2 => 2 => remainder 1;
// 2 / 2 => 1 => remainder 0;
// 1 / 2 => 0 => remainder 1
// (42)base 10 = (101010)base 2


// 50 => 110010 => this comes by taking LCM of 42 and remainder will be added


int decimalToBinanry (int decNum) {
    int ans = 0, pow = 1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans; // binary form
}


int binaryToDecimal(int binNum) {
    int ans = 0, power = 1;
    while(binNum > 0) {
      int rem = binNum % 10;
      ans += rem * power;

      binNum /= 10;
      power *= 2;
    }
    return ans; // decimal form 
}


int main()
{
    for(int i = 1; i <= 10; i++) {
        cout << decimalToBinanry(i) << endl;
    }
    cout << binaryToDecimal(101010) << endl;

    return 0;
}