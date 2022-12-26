#include <iostream>
using namespace std;

int Power(int a, int b) {

    // Base condition
    if (b == 0)
        return 1;

    else
        return a * Power(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "aPowerb = " << Power(a, b);
    return 0;
}