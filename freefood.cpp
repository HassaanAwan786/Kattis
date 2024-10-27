#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // initialize the set of days with free food to be empty
    set<int> days;

    // read the start and end days for each event
    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;

        // add the days with free food for this event to the set
        for (int day = start; day <= end; day++) {
            days.insert(day);
        }
    }

    // print the number of days with free food
    cout << days.size() << endl;

    return 0;
}
