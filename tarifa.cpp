#include<iostream>
using namespace std;
int main()
{
    int total_MBs;//total mbs X
    long sum = 0;
    int months_used;//no of moths in which mbs are used N
    long total = 0;
    long months[10000];
    cin >> total_MBs;
    cin >> months_used;
    for (int i = 0; i < months_used; i++)
    {
        cin >> months[i];
        sum = sum + months[i];

    }
    total = months_used * total_MBs;
    cout <<(total-sum)+total_MBs;

    return 0;

}
