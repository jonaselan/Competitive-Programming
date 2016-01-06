#include <iostream>
using namespace std;
/* http://br.spoj.com/problems/JFILA14/ */

int fila[50000];
int retirado[50000];

int main() {
  int n=0, m=0;

  ios_base::sync_with_stdio(false);
  cin >> n;
  if ((n >= 1) && (n <= 50000)) {
    for (int i = 0; i < n; i++) {
    //  if ((n >= 1) && (n <= 100000)) {
        cin >> fila[i];
      }
    }

    cin >> m;
    if ((m >= 1) && (m <= 50000)) {
      for (int i = 0; i < m; i++) {
      //  if ((m >= 1) && (m <= 100000)) {
          cin >> retirado[i];
        }
      }

      bool aux = true;
      int j =0;
      for (int i = 0; i < n; i++) {
        aux = true;
        j =0;
        //  for (int j = 0; j < m; j++) {
        while ((j<m) && (aux != false)) {
            if (fila[i] == retirado[j]) {
              aux = false;
            }
          j++;
        }
        //  }
        if (aux) {
          cout << fila[i] << " ";
        }
      }
//   }
  //}
}
