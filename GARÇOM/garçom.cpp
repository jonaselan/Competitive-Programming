#include <iostream>
/* http://br.spoj.com/problems/JGARCOM/ */

using namespace std;

int main(){
  int n, valor = 0;
  cin >> n;
  while (n > 0) {
    n--;
    int l, c;
    cin >> l;
    cin >> c;

    if (l > c) {
      valor += c;
    }

  }
  cout << valor;
}
