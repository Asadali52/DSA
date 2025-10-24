#include <iostream>
using namespace std;

int main()
{
    // int n = 4;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 6;
    // for(int i = 0; i < n; i++) {
    //     char ch = 'A';
    //     for(int j = 0; j < n; j++) {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 5;
    // int count = 1;
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << count++ << " ";
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 5;
    // char ch = 'A';
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // TRIANGLE PATTERNS

    // int n = 6;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i + 1; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 4;
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < i + 1; j++) {
    //         cout << i + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 5;
    // char ch = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i + 1; j++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    //     ch++;
    // }

    // -----------------------------------

    // int n = 5;
    // for(int i = 0; i < n; i++) {
    //     for(int j = 1; j <= i + 1 ; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 6;
    // for(int i = 0; i < n; i++) {
    //     for(int j = i + 1; j > 0; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // FLOYD'S TRIANGLE PATTERN

    // int n = 7;
    // int count = 1;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i + 1 ; j++){
    //         cout << count++ << " ";
    //     }
    //     cout << endl;
    // }

    // int n = 7;
    // int count = 1;
    // for (int i = 0; i < n; i++){
    //     for (int j = i + 1; j > 0 + 1 ; j--){
    //         cout << count++ << " ";
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 5;
    // char ch = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i + 1 ; j++){
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 4;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - i; j++) {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // int n = 4;
    // char ch = 'A';
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < i; j++) {
    //         cout << " ";
    //     }
    //     for(int j = 0; j < n - i; j++) {
    //         cout << ch;
    //     }
    //     cout << endl;
    //     ch++;
    // }

    // -----------------------------------

    // int n = 10;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n - i - 1; j++){
    //         cout << " ";
    //     }
    //     for(int j = 1; j <= i + 1; j++) {
    //        cout << j;
    //     }
    //     for(int j = i; j >= 1; j--) {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // -----------------------------------

    // HOLLOW DIAMOND PATTERN

    // int n = 4;
    // for (int i = 0; i < n; i++){
        
    //     for (int j = 0; j < n - i - 1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if (i != 0){
    //         for (int j = 0; j < 2 * i - 1; j++){
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // for(int i = 0; i < n - 1; i++) {

    //     for (int j = 0; j < i + 1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";

    //     if(i != n - 2) {
    //         for(int j = 0; j < 2*(n-i)-5; j++) {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    return 0;
}