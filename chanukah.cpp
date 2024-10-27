#include <iostream>
using namespace std;
int main() {
     
    long num;
    long k, days,sum=0;
    cin >> num;
    for (int l = 0; l < num; l++)
    {
        cin >> k >> days;
        for (int k = days; k >0; k--)
        {
            sum =sum+ k + 1;
        }
         
            cout << l + 1 << " " << sum;
            sum = 0;
    }
    return 0;
}
