#include <iostream>
#include<string>
using namespace std; 
void rd(char* array)
{
     
    if (array[0] == '\0')
        return; 
    if (array[0] == array[1]) {
 
        int i = 0;
        while (array[i] != '\0') {
            array[i] = array[i + 1];
            i++;
        } 
        rd(array);
    }
    rd(array + 1);
}
int main()
{
    char array[250];
    cin >> array;
    rd(array);
    cout << array << endl;
    return 0;
}
