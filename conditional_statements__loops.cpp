#include <iostream>
using namespace std;

int main()
{
    // int count = 1;
    // while (count <= 10)
    // {
    //     cout << count << " ";
    //     count++;
    // }
    // cout << endl;

    // -----------------------------------

    // int n = 10;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }
    // cout << endl;

    // -----------------------------------

    // int n = 50;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << "sum = " << sum << endl;

    // -----------------------------------

    // int n = 100;
    // int sum = 0;
    // int i = 1;
    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // cout << "sum = " << sum << endl;

    // -----------------------------------

    // int n = 10;
    // int oddsum = 0;
    // for(int i = 1; i <= n; i++) {
    //     if(i % 2 != 0) {
    //         oddsum += i;
    //     }
    // }
    // cout << "oddsum = " << oddsum << endl;

    // -----------------------------------

    // int n = 10;
    // int evenSum = 0;
    // int i = 1;
    // while (i <= n) {
    //     if(i % 2 == 0) {
    //         evenSum += i;
    //     }
    //     i++;
    // }
    // cout << "evensum = " << evenSum << endl;

    // -----------------------------------

    // int n = 10;
    // int i = 1;
    // do{
    //     cout << i << " ";
    //     i++;
    // } while (i <= n);
    // cout << endl;

    // -----------------------------------

    // int n = 5;
    // bool isPrime = true;
    // for (int i = 2; i * i <= n; i++) {
    //     if (n % i == 0) {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime == true) {
    //     cout << n << " Number is Prime\n";
    // } else {
    //     cout << n << " Number is not prime\n";
    // }

    // -----------------------------------

    // for (int i = 1; i <= 5; i++)
    // {
    //     int m = 10;
    //     for (int j = 1; j <= m; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 20;
    // int sum = 0;
    // for (int i = 1; i <= n; i++){
    //     if (i % 3 == 0){
    //         sum += i;
    //     }
    // }
    // cout << "sum = " << sum << endl;

    // -----------------------------------

    int n = 5;
    int fictorial = 1;
    for (int i = 1; i <= n; i++)
    {
        fictorial *= i;
    }
    cout << "fictorial = " << fictorial << endl;

    return 0;
}