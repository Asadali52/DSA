#include <iostream>
using namespace std;

int printHello() {
    cout << "hello world c++ functions\n";
    return 2;
}

int main()
{
    int val = printHello();
    cout << "val = " << val << endl;
    cout << printHello() << endl;
   
    return 0;
}