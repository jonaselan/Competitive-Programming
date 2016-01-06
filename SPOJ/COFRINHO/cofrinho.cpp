#include <iostream>
using namespace std;

/* http://br.spoj.com/problems/COFRE/ */

int main() {
  int n=1, cont=0;
  while (n != 0){
    cin >> n;
    ++cont;
    int a[n];
    if (n != 0) {
      int i, j, z;

      for (i = 0; i < n; i++) {
        if (i == 0){
          cin >> j;
          cin >> z;
          a[i] = j - z;
          //cout << j << "-" << z << endl;
          //cout << a[i] << endl;
        }
        else if(i < n) {
        j = 0;
        z = 0;
          cin >> j;
          cin >> z;
          j = j + (a[i-1]);
          a[i] = j - z;
          //cout << j << "-" << z << endl;
          //cout << a[i] << endl;
        }
      }

      cout << "Teste " << cont << endl;
      for (int j = 0; j < n; j++) {
        cout << a[j] << endl;
      }
      cout << "\n";
    }

  }
}
