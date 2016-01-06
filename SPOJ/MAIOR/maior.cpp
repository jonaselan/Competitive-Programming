#include <iostream>
using namespace std;

/* http://br.spoj.com/problems/JDESAF12/ */

int main() {
  int cont = 0, maior = 0, num = 1;
  while (num != 0) {
    cin >> num;
    if ((cont <= 100)) {
      if (num > maior) {
        maior = num;
        cont++;
      }
    }
  }
  cout << maior;
  return 0;
}
