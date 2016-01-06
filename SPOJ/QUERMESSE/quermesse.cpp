#include <iostream>
using namespace std;
/* http://br.spoj.com/problems/QUERM/ */
int main () {
  int n, nTeste=0, dvez, i=1;
  bool aux = true;
  cin >> n;
  while (n!=0) {
    if ((n <= 10000) && (n > 0)) {
      i=1;
      // for (int i = 1; i < n+1; i++) {
      while((i<(n+1)) || (aux!=false)){
        cin >> dvez;
        /*cout << dvez << "-" << i << " ";*/
        if (dvez==i) {
          ++nTeste;
          cout << "Teste " << nTeste << "\n";
          cout << i << "\n\n";
          aux = false;
        }
        ++i;
      }
    }
    cin >> n;
  }
}
