#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // count the number of pink or rose buttons
    int count = 0;
    for (int i = 0; i < n; i++) {
        string color;
        cin >> color;

        // convert the string to lowercase
        transform(color.begin(), color.end(), color.begin(), ::tolower);

        // check if the string contains "pink" or "rose"
        if (color.find("pink") != string::npos || color.find("rose") != string::npos) {
            count++;
        }
    }

    // output the result
    if (count == 0) {
        cout << "I must watch Star Wars with my daughter" << endl;
    } else {
        cout << count << endl;
    }

    return 0;
}
