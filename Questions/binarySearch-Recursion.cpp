#include <iostream>
using namespace std;

bool binarySearchR(int arr[], int key, int s, int e) {

    // Base case
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }

    else if (arr[mid] < key)
    {
        return binarySearchR(arr, key, mid + 1, e);
    }
    else
    {
        return binarySearchR(arr, key, s, mid - 1);
    }

}

int main()
{
    int arr[] = { 1,2,6,7,9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    binarySearchR(arr, key, 0, size - 1) ?
        cout << "found" : cout << "Not found";

    return 0;
}