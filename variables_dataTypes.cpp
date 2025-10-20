#include <iostream>
using namespace std;

// DATA TYPES

// int main()
// {
//     int age = 25;
//     char grade = 'A';
//     float PI = 3.14F;
//     bool isSafe = true;
//     double price = 100.99;

//     cout << sizeof(age) << endl; // 4
//     cout << isSafe << endl;      // true will print 1 and false will print 0
//     cout << grade << endl;       // A
//     cout << PI << endl;          // 3.14
//     cout << price << endl;       // 100.99

//     // TYPE CASTING
//     // converting data from one type to another
//     char grades = 'a';
//     double prices = 100.99;
//     int value = grades;
//     int newPrices = (int)prices;
//     cout << value << endl;
//     cout << newPrices << endl;

//     return 0;
// }

int main()
{
    // int age;
    // cout << "Enter the age: ";
    // cin >> age;
    // cout << "You age is = " << age << endl;

    // double price = 100.22;
    // cout << "Enter the price: ";
    // cin >> price;
    // cout << "Your price is = " << price << endl;

    // ARITHMETIC OPERATORS
    // int a = 5, b = 11;
    // cout << "sum = " << (a + b) << endl;
    // cout << "difference = " << (a - b) << endl;
    // cout << "Multiply = " << (a * b) << endl;
    // cout << "Division = " << (b / a) << endl;
    // cout << "Division casting = " << (b / (double)a) << endl;
    // cout << "Modulus = " << (b % a) << endl;

    // REATIONAL OPERATORS
    // cout << (3 > 5) << endl;  // false => 0
    // cout << (3 < 5) << endl;  // true => 1
    // cout << (3 <= 3) << endl; // true => 1
    // cout << (2 != 2) << endl; // false => 0
    // cout << (5 == 5) << endl; // true => 1

    // UNARY OPERATORS 
    // int a = 10;
    // int b = a++;
    // cout << a++ << endl;
    // cout << ++a << endl;
    // cout << b << endl;

    // QUESTION:  SUM OF TWO NUMBERS
    int a, b;
    cout << "enter a = ";
    cin >> a;
    cout << "enter b = ";
    cin >> b;

    int sum = a + b;
    cout << "sum = " << sum << endl;

    return 0;
}