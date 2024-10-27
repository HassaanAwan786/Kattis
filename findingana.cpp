#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    // find the first occurrence of 'a'
    size_t pos = s.find('a');
    if (pos != string::npos) {
        // output the suffix starting from the first occurrence of 'a'
        cout << s.substr(pos) << endl;
    }

    return 0;
}
