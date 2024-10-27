#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
    long base=0, power=0, nwp;
        cin >> nwp;
            power = nwp % 10;
            base = nwp/10000;
             
            if (base == 555)
            {
                cout << "1";
             }
            else {
                cout << "0";
            }
    return 0;
}
