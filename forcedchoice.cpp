#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int n, secret, m;
    cin >> n >> secret >> m;

    // initialize the set of remaining cards to the full set of cards
    unordered_set<int> cards;
    for (int i = 1; i <= n; i++) {
        cards.insert(i);
    }

    // repeat the steps m times
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;

        // read the cards chosen by the princess
        unordered_set<int> chosen;
        for (int j = 0; j < k; j++) {
            int card;
            cin >> card;
            chosen.insert(card);
        }

        // check if the chosen cards contain the secret card
        if (chosen.count(secret)) {
            // if the secret card is chosen, keep the chosen cards
            cout << "KEEP" << endl;
            cards = chosen;
        } else {
            // if the secret card is not chosen, remove the chosen cards
            cout << "REMOVE" << endl;
            for (int card : chosen) {
                cards.erase(card);
            }
        }
    }

    return 0;
}
