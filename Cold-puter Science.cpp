#include<iostream>
using namespace std;
int main()
{
    int array[100];
    int count = 0;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        if ( array[i]<0)
        {
            count++;
             
        }
    }
      cout << count;

 return 0;
}
