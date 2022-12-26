#include <iostream>
#include <vector>
using namespace std;

void bubbleSortR(vector<int>& arr, int size) {

    // Base case 
    if (size == 0 || size == 1)
    {
        return;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    bubbleSortR(arr, size - 1);
}

int main()
{
    vector<int> arr = { 2,53,857,95,10,5 };
    int n = arr.size();
    bubbleSortR(arr, n);

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}