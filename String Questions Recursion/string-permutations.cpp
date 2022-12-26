#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(string str, vector<string>& ans, int index)
    {
        // Base case
        if (index == str.length())
        {
            ans.push_back(str);
            return;
        }

        for (int j = index; j < str.length(); j++)
        {
            swap(str[index], str[j]);
            solve(str, ans, index + 1);
            swap(str[index], str[j]); //Backtracking
        }

    }

    vector<string> stringPermutaions(string str) {
        vector<string> ans;
        solve(str, ans, 0);
        return ans;
    }
};


int main()
{
    Solution object;
    string str;
    cin >> str;
    vector<string> permutations = object.stringPermutaions(str);
    for (auto x : permutations)
        cout << x << " ";

    return 0;
}