#include <iostream>
using namespace std;

// Case of head recursion
void counting(int n) {
    if (n == 0)
        return;

    counting(n - 1); // Recursive Relation
    cout << n << endl; // Processing
}

int main()
{
    int n;
    cin >> n;

    counting(n);
    return 0;
}