#include <iostream>
using namespace std;

bool linearSearchR(int arr[], int key, int size) {
    // Base condition
    if (size == 0)
        return false;

    if (arr[0] == key)
        return true;

    else
        return linearSearchR(arr + 1, key, size - 1);
}

int main()
{
    int arr[] = { 2,8,1,5,9,4,6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    linearSearchR(arr, key, size) ?
        cout << "found" : cout << "Not found";

    return 0;
}