#include <iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    cin >> name;
    cout << name[0];//for first letter of string 
    for (int i = 1; i < name.length() - 1; i++)
        if (name[i] == '-')
            cout <<name[i+1];//for first letter after -
    return 0;
}
