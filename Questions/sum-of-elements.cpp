#include <iostream>
using namespace std;

int sumOfElements(int arr[], int size) {
    // Base condition
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        // Reucerence relation
        return arr[0] + sumOfElements(arr + 1, size - 1);
    }
}

int main()
{
    int arr[] = { 305,5,2,4,7 };
    int ans = sumOfElements(arr, 5);
    cout << ans;
    return 0;
}