#include <iostream>
#include <string>
using namespace std;

int main() {
  // Read in the string
  string str;
  getline(cin, str);

  // Initialize counters for the different character types
  int whitespace_count = 0;
  int lowercase_count = 0;
  int uppercase_count = 0;
  int symbol_count = 0;

  // Iterate through the string and count the number of each character type
  for (char c : str) {
    if (c == '_') {
      whitespace_count++;
    } else if (c >= 'a' && c <= 'z') {
      lowercase_count++;
    } else if (c >= 'A' && c <= 'Z') {
      uppercase_count++;
    } else {
      symbol_count++;
    }
  }

  // Calculate the ratios of each character type
  double whitespace_ratio = (double) whitespace_count / str.length();
  double lowercase_ratio = (double) lowercase_count / str.length();
  double uppercase_ratio = (double) uppercase_count/ str.length();
  double symbol_ratio = (double) symbol_count / str.length();
  
  cout<<whitespace_ratio<<endl; 
   cout<<lowercase_ratio<<endl;
  cout<<uppercase_ratio<<endl; 
    cout<<symbol_ratio<<endl;
return 0;    
};
