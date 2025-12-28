#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
};

void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    // int marks[6] = {99, 100, 54, 36, 88, 9};
    // marks[0] = 199;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;
    // cout << sizeof(marks) << endl; // 24 => 4 bytes each

    // for (int i = 0; i < 6; i++){
    //     cout << marks[i] << endl;
    // }

    // ----------------------

    // // FIND SMALLEST AND LARGEST NUMBER;

    // int nums[] = {5, 15, 22, 1, -15, 24};
    // int size = 6;
    // int smallest = INT_MAX;
    // int largest = INT_MIN;
    // for (int i = 0; i < size; i++)
    // {
    //     if (nums[i] < smallest)
    //     {
    //         smallest = nums[i];
    //     }
    //     // smallest = min(nums[i], smallest) => min function
    // };
    // cout << "Smallest = " << smallest << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     // if(nums[i] > largest) {
    //     //     largest = nums[i];
    //     // }
    //     largest = max(nums[i], largest);
    // };
    // cout << "Largest = " << largest << endl;

    //---------------------------

    // LINEAR SEARCH ALGORITHM

    // int arr[] = {4, 2, 7, 8, 1, 2, 5};
    // int sz = 7;
    // int target = 8;
    // cout << linearSearch(arr, sz, target) << endl;

    //---------------------------

    // REVERSE A ARRAY

    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;
    reverseArray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}