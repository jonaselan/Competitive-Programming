#include <iostream>
#include <string>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1241 */

int main() {
  int n, aux;
  bool sim;
  cin >> n;
  string A; string B;

  while(n > 0){
    sim = true; aux=0;
    cin >> A; cin >> B;
    if (A.size() >= B.size()) {
      while ((B.size()-aux) > 0){
        aux++;
        //cout << A[A.size()-aux] << " - " << B[B.size()-aux] << "\n";
        if (A[A.size()-aux] != B[B.size()-aux]) {
          sim = false;
          break;
        }
      }
    }
    else { sim = false; }

    if (sim) {
      cout << "encaixa" << "\n";
    }
    else{
      cout << "nao encaixa" << "\n";
    }
    n--;
  }
}
