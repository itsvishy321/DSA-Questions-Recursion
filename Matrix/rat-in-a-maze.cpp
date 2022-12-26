//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
public:
    vector<string> ans;

    void solve(vector<vector<int>>& maze, int n, string output, int row, int col)
    {
        // Base case
        if (row == n - 1 && col == n - 1 && maze[row][col] == 1)
        {
            ans.push_back(output);
            return;
        }

        if (row < 0 || col < 0 || row == maze.size() || col == maze[0].size() || maze[row][col] == 0)
        {
            return;
        }

        int temp = maze[row][col];
        maze[row][col] = 0;

        // Going up
        output.push_back('U');
        solve(maze, n, output, row - 1, col);
        output.pop_back(); // Backtracking

        // Going down
        output.push_back('D');
        solve(maze, n, output, row + 1, col);
        output.pop_back(); // Backtracking

        // Going right
        output.push_back('R');
        solve(maze, n, output, row, col + 1);
        output.pop_back(); // Backtracking

        // Going up
        output.push_back('L');
        solve(maze, n, output, row, col - 1);

        // Backtracking for the current cell
        maze[row][col] = temp;
    }


    vector<string> findPath(vector<vector<int>>& m, int n) {
        // Your code goes here

        // Base case
        if (m[0][0] == 0)
            return ans;

        string output;

        solve(m, n, output, 0, 0);

        return ans;
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends