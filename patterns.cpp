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

    int n = 4;
    char ch = 'A';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}