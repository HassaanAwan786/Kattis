#include<iostream>
using namespace std;
int main()
{
    int size;
    int count = 0;
    double sum = 0;
    cin >> size;
    int array[100];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
        if (array[i] == -1)
        {
            array[i] = NULL;
            count++;
        }
        sum = sum + array[i];

    }
    cout << sum / (size - count);
 
    return 0;
}
