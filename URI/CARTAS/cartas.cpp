#include <iostream>
#include <vector>
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1110

using namespace std;
int main(){
  int num;
  cin >> num;

  if (num) {
    vector <int> cards;
    for (int i = 1; i < num+1; i++) {
      cards.push_back(i);
    }

    cout << "Discarded cards: ";
    while(cards.size() > 1){
      if (cards.size() == 2){
        cout << cards[0] << "\n";
      }
      else {
        cout << cards[0] << ", ";
      }
        cards.erase(cards.begin());
        cards.push_back(cards[0]);
        cards.erase(cards.begin());
    }

    cout << "Remaining card: " << cards[0] << "\n";

  }
  else
   return 0;

  main();
}
