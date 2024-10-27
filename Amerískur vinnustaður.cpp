#include <iostream>
#include <iomanip>  // Include the <iomanip> header for setprecision
using namespace std;

int main() {
    long long fi;
    double ans;
    
    cin >> fi;
    ans = fi * (0.09144);
    
    // Set the precision to display more decimal places
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
