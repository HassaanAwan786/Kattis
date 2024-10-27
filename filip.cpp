#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // reverse the numbers
    int ra = 0, rb = 0;
    while (a > 0) {
        ra = ra * 10 + a % 10;
        a /= 10;
    }
    while (b > 0) {
        rb = rb * 10 + b % 10;
        b /= 10;
    }

    // compare the reversed numbers and output the larger one
    if (ra > rb) {
        cout << ra << endl;
    } else {
        cout << rb << endl;
    }

    return 0;
}
