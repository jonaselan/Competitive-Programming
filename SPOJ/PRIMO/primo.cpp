#include <iostream>
#include <cmath>
using namespace std;
/*
http://br.spoj.com/problems/PRIMO/
 */
int main() {
  long  num = 0;
    cin >> num;
    int aux = 0;

    if (num < 0) {
      num *= -1;
    }
      for(int i = 2; i < sqrt(num)+1; i++){
          if (num%i==0) {
            /* não é primo */
            aux = 1;
            break;
          }
      }

      if (aux == 1) { cout << "nao\n";}
      else { cout << "sim\n"; }

  return 0;
}
