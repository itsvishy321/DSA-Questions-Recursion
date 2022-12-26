#include <iostream>
using namespace std;

void reverseString(string& s, int i, int j) {

    // Base case 
    if (i > j)
        return;

    // Processing
    swap(s[i], s[j]);

    // Reucurrence relation
    return reverseString(s, ++i, --j);
}


int main()
{
    string str = "Vishal";
    int length = str.length();
    reverseString(str, 0, length - 1);
    cout << str;
    return 0;
}