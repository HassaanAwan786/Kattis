#include <iostream>
using namespace std;

int main() {
  // Read in the number of pieces in the set
  int num_kings, num_queens, num_rooks, num_bishops, num_knights, num_pawns;
  cin >> num_kings >> num_queens >> num_rooks >> num_bishops >> num_knights >> num_pawns;

  // Calculate the number of pieces to add or remove for each type
  int diff_kings = 1 - num_kings;
  int diff_queens = 1 - num_queens;
  int diff_rooks = 2 - num_rooks;
  int diff_bishops = 2 - num_bishops;
  int diff_knights = 2 - num_knights;
  int diff_pawns = 8 - num_pawns;

  // Output the number of pieces to add or remove for each type
  cout << diff_kings << " " << diff_queens << " " << diff_rooks << " " << diff_bishops << " " << diff_knights << " " << diff_pawns << endl;

  return 0;
}
