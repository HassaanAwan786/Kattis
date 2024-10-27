#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);

    int vowel_count = 0;
    for (char c : line) {
        // Check if c is a vowel (upper or lower case)
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            ++vowel_count;
        }
    }

    cout << vowel_count << endl;

    return 0;
}
