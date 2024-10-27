#include<iostream>
#include<vector>
using namespace std;
struct hello
{
    int points;
    char questions;
    string result;
};
int main()
{
    hello h;
    vector<hello>vect;
    vector<char>vect2;
    int right = 0;
    int wrong = 0;
    int score=0;
    while (cin >> h.points && h.points!=-1)
    {
        cin>>h.questions>>h.result;
        vect.push_back(h);
    }
    for (hello x : vect)
    {
        if (x.result == "right")
        {
            vect2.push_back(x.questions);
            score += x.points;
            right++;
        }
    }
    for (auto x : vect2)
    {
        for (auto y : vect)
        {
            if (x == y.questions&&y.result=="wrong")
            {
                wrong++;
            }
        }
    }
    score += (wrong * 20);
    cout << right << " " << score << endl;
}
