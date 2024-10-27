
 Download chanukah.cpp
#include<iostream>
using namespace std;
typedef long long ll;
ll sum(int n)
{
    ll x = 2, answer = 0;
    for (int i = 0; i < n; i++)
    {
        answer += x;
        x++;
    }
    return answer;
}
int main()
{
    int t;
    cin >> t;
    int num = 0, days = 0;
    ll answer = 0;
    while(t--)
    {
        cin >> num >> days;
        answer = sum(days);
        cout << num << " " << answer << endl;
    }
    return 0;
}
