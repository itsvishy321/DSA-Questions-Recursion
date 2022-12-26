#include <bits/stdc++.h>
using namespace std;

bool possibleSoln(vector<int> arr, int mid, int n, int k)
{
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }

            lastPos = arr[i];
        }
    }
    return false;
}

int aggressive_cows(vector<int> arr, int n, int k, int s, int e, int ans)
{
    int mid = s + (e - s) / 2;

    // Base condition
    if (s > e)
        return ans;

    if (possibleSoln(arr, mid, n, k))
    {
        return aggressive_cows(arr, n, k, mid + 1, e, mid);
    }
    else
    {
        return aggressive_cows(arr, n, k, s, mid - 1, ans);
    }

}

int main()
{
    vector<int> arr = { 8,5,2,12 };
    sort(arr.begin(), arr.end());
    int n = arr.size();

    int result = aggressive_cows(arr, n, 3, 0, arr[n - 1], -1);

    result == -1 ?
        cout << "Largest minimum distance cannot be found!" << endl :
        cout << "Largest minimum distannce : " << result << endl;


    return 0;
}