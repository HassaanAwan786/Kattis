#include <iostream>
#include <string>

using namespace std;

int main() {
    string jon_marius, doctor;
    cin >> jon_marius >> doctor;

    if (jon_marius.length() >= doctor.length()) {
        cout << "go" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
