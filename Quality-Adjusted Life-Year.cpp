#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int noin;
    double  A,B,sum=0;
    cin>>noin;
    for(int i=0;i<noin;i++)
    {
        cin>>A>>B;
        sum=sum+(A*B);
    }
    cout<<fixed<<setprecision(3)<<sum<<endl;;
return 0;
}
