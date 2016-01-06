#include <iostream>
using namespace std;
/* http://br.spoj.com/problems/CFATORES/ */
int main () {
  int n, dAnt;
  cin >> n;
  while (n != 0) {
    int nVez = n, i=2, divs=0;
      while (nVez!=1) {
        while (nVez%i) {
          ++i;
        }
        nVez /= i;
        // cout << nVez << " - ";
        if (dAnt!=i){
          ++divs;
        }
        dAnt = i;
        i = 2;

      }
        cout << n << " : " << divs << "\n";
        cin >> n;
  }
}
