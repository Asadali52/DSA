#include <iostream>
using namespace std;

// int printHello() {
//     cout << "hello world c++ functions\n";
//     return 2;
// }

// -----------------------------------

// int sum (int a, int b) {
//     int s = a + b;
//     return s;
// }

// -----------------------------------

// double doublesum(double a, double b) {
//     double s = a + b;
//     return s;
// }

// -----------------------------------

// int sumOfDigits(int num){
//     int digitSum = 0;
//     while (num > 0) {
//         int lastDigit = num % 10;
//         num /= 10;
//         digitSum += lastDigit;
//     }
//     return digitSum;
// }

// -----------------------------------

// int factorial(int n) {
//     int fact = 1;
//     for(int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n, int r) {
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_n_r = factorial(n - r); 

//     return fact_n / (fact_r * fact_n_r);
// }

// -----------------------------------

// bool numberIsPrime (int n) {

//     if (n <= 1) return false;

//     for(int i = 2 ; i < n - 1; i++) {
//         if(n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// -----------------------------------

void primes(int n) {
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j < i - 1; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
}


int main()
{
    // cout << sum(10, 5) << endl;
    // cout << printHello() << endl;
    // cout << doublesum(10.99, 5.67) << endl;
    // cout << "sum = " << sumOfDigits(2356) << endl;
    
    // int n = 8, r = 2;
    // cout << nCr(n, r) << endl;
    
    // cout << numberIsPrime(4) << endl;
    primes(7);

    return 0;
}