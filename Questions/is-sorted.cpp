#include <iostream>

using namespace std;

bool isSorted(int arr[], int size) {
    // Base condition
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    else
    {
        bool check = isSorted(arr + 1, size - 1);
        return check;
    }

}

int main()
{
    int nums[] = { 1,0,3,8,8 };
    cout << isSorted(nums, 5);
    return 0;
}