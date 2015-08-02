#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
  int k = 0, n=0;
  cin >> k;
  if (k > 0) {
    while (k > n) {
      bool cond = true;
      int sud[9][9];
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          cin >> sud[i][j];
        }
      }
          /*printf("m[%d][%d] - m[%d][%d]\n", i, j, i, k);*/
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {

            /* verificar as linhas */
            for (int k = 0;k < 9; k++) {
              if (j != k){
                if (sud[i][j] == sud[i][k]) {
                  cond = false;
                  break;
                }
              }
            }
            if (!cond) {
              break;
            }

            /*verificar as colunas */
            for (int k = 0;k < 9; k++) {
              if (i != k){
                if (sud[i][j] == sud[k][j]) {
                  printf("m[%d][%d] - m[%d][%d]\n", i, j, k, j);
                  cond = false;
                  break;
                }
              }
            }
            if (!cond) {
              break;
            }

         }
      }
      n++;
      if (cond == false) {
        cout << "Instancia " << n <<"\n";
        cout << "NAO\n";
      }
      else {
        cout << "Instancia " << n <<"\n";
        cout << "SIM\n";
      }


    }
  }
}
