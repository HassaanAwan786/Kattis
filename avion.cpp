#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> cia_blimps;
    for (int i = 1; i <= 5; ++i) {
        string registration;
        cin >> registration;

        // Check if the registration code contains the string "FBI"
        if (registration.find("FBI") != string::npos) {
            cia_blimps.push_back(i);
        }
    }

    if (cia_blimps.empty()) {
        cout << "HE GOT AWAY!" << endl;
    } else {
        for (int i : cia_blimps) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
