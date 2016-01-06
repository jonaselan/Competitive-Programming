#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1387 */
int main () {
  int dir, esq;
  cin >> dir;
  cin >> esq;

  while ((dir != 0) || (esq !=0)) {
    cout << dir + esq << endl;

    cin >> dir;
    cin >> esq;
  }
}
