#include <iostream>
using namespace std;

bool checkPalindrome(string s, int i, int j)
{
    // Base case
    if (s[i] != s[j])
        return false;

    else if (i > j)
        return true;

    else
        return(checkPalindrome(s, i + 1, j - 1));
}


int main()
{
    string str = "";

    if (checkPalindrome(str, 0, str.length() - 1))
        cout << "Pallindrome" << endl;

    else
        cout << "Not pallindrome" << endl;

    return 0;
}