#include <iostream>
using namespace std;

void sayDigits(int n, string arr[]) {
    if (n == 0)
        return;

    int digit = n % 10;
    n /= 10;

    sayDigits(n, arr);
    cout << arr[digit] << " ";
}

int main()
{
    string strArray[] = { "zero", "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" };
    int n;
    cin >> n;
    sayDigits(n, strArray);
    return 0;
}