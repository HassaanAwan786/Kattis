#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main() {
  // Read in the percentage of switch points bet on option one
  double a;
  cin >> a;

  // Compute the switch-payout-ratio for option one
  double option_one_ratio = (100.0 / a);

  // Compute the switch-payout-ratio for option two
  double option_two_ratio = (100.0 / (100.0 - a));

  // Output the switch-payout-ratios
  cout << fixed << setprecision(10) << option_one_ratio << endl;
  cout << fixed << setprecision(10) << option_two_ratio << endl;

  return 0;
}
