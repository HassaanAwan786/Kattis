#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int expected_count = 1;
    bool is_sense = true;
    
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        
        if (word == "mumble") {
            expected_count++;
        } else {
            int count = stoi(word);
            if (count != expected_count) {
                is_sense = false;
                break;
            }
            expected_count++;
        }
    }
    
    if (is_sense) {
        cout << "makes sense" << endl;
    } else {
        cout << "something is fishy" << endl;
    }
    
    return 0;
}
