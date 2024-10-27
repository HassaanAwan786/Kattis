#include <iostream>
using namespace std;

int main() {
     
    int num;
    int k, days,sum=0;
    cin >> num;
    for (int l = 0; l < num; l++)
    {
        cin >> k >> days;
        for (int m= days; m>0; m--)
        {
            sum =sum+ m+ 1;
        }
         
            cout << l + 1 << " " << sum;
            sum = 0;
    }
    return 0;
}
