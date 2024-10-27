#include <iostream>
using namespace std;
int main() {
    long long x,y;
     cin>>x;
     cout<<endl;
     cin>>y;
     if(x>0&&y>0)
     cout<<"1";
     else if(x<0&&y>0)
     cout<<"2";
     else if(x<0&&y<0)
     cout<<"3";
     else if(x>0&&y<0)
     cout<<"4";
    return 0;
}
