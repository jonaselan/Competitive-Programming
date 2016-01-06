#include <iostream>
using namespace std;

/* http://br.spoj.com/problems/CHUVA11/ */

int main() {
  int n;
  cin >> n;

  if ((n>=1) && (n <=100)) {
    /* lendo primeiro mapa */
    int mapa1[n][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> mapa1[i][j];
        if ((mapa1[i][j] < 0) || (mapa1[i][j] > 100)){
          return 0;
        }
      }
    }
    /* lendo segundo mapa */
    int mapa2[n][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> mapa2[i][j];
        if ((mapa2[i][j] < 0) || (mapa2[i][j] > 100)){
          return 0;
        }
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cout << mapa1[i][j]+mapa2[i][j] << " ";
      }
      cout << "\n";
    }

  }
}
