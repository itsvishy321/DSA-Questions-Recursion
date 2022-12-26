/*
Given a string containing lowercase English letters
return all possible non zero subsequences of the given string.

Sample Input 1:
1
abc
Sample Output 1:
a ab abc ac b bc c

*/


#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    void solve(string str, vector<string>& ans, int idx, string output)
    {
        if (idx == str.length())
        {
            if (output != "")
                ans.push_back(output);

            return;
        }

        // Call for exclude
        solve(str, ans, idx + 1, output);

        // Call for include
        output += str[idx];
        solve(str, ans, idx + 1, output);
    }

    vector<string> subsequences(string& str) {
        vector<string> ans;
        string output = "";
        solve(str, ans, 0, output);
        return ans;
    }
};

int main()
{
    Solution object;
    string str = "abc";
    vector<string> ans = object.subsequences(str);
    for (auto x : ans) {
        cout << x << endl;
    }

    return 0;
}