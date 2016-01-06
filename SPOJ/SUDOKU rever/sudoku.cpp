#include <iostream>
#include <stdio.h>
using namespace std;

/* http://br.spoj.com/problems/SUDOIME/ */

int sud[9][9];
bool cond;

void imprimir(int linha, int coluna) {
for (int l = linha; l < (linha+3);l++) {
  for (int c = coluna; c < (coluna+3); c++) {
      cout << sud[l][c] << " ";
    }
    cout << "\n";
  }
  cout << "\n";
}

void v3x3 (int linha, int coluna){
  for (int l = linha; l < (linha+3);l++) {
    for (int c = coluna; c < (coluna+3); c++) {

      for (int k = coluna; k < (coluna+3); k++) {
        if (c != k){
          if (sud[l][c] == sud[l][k]) {
            /*printf("m[%d][%d] = %d - m[%d][%d] = %d \n", l, c, k, c, sud[l][c], sud[l][k]);*/
            cond = false;
            break;
          }
        }
      }
      if (!cond) {
        break;
      }

      for (int k = linha;k < (linha + 3); k++) {
        if (l != k) {
          if (sud[l][c] == sud[k][c]) {
            /*printf("m[%d][%d] = %d - m[%d][%d] = %d \n", l, c, k, c, sud[l][c], sud[k][c]);*/
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
}

int main () {
  int k = 1, n=0;
    while (k > n) {
      cin >> k;
      if (k > 0) {
      cond = true;

      /* ler matriz */
      for (int l = 0; l < 9; l++) {
        for (int c = 0; c < 9; c++) {
          cin >> sud[l][c];
        }
      }

      /* verificando 3x3 */
      if (cond) {
        imprimir(0, 0);
        imprimir(0, 3);
        imprimir(0, 6);
        imprimir(3, 0);
        imprimir(3, 3);
        imprimir(3, 6);
        imprimir(6, 0);
        imprimir(6, 3);
        imprimir(6, 6);
      }


      /* verificando cada linha e coluna do elemento */
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {

            /* verificar as linhas */
            for (int k = 0;k < 9; k++) {
              if (j != k){
                if (sud[i][j] == sud[i][k]) {
                  printf("m[%d][%d] - m[%d][%d] = %d \n", i, j, i, k, sud[i][j]);
                  cond = false;
                  break;
                }
              }
            }
            if (!cond) {
               break;
            }

            /* verificar as colunas */
            for (int k = 0;k < 9; k++) {
              if (i != k) {
                if (sud[i][j] == sud[k][j]) {
                  printf("m[%d][%d] - m[%d][%d] = %d \n", i, j, k, j, sud[i][j]);
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
        cout << "NAO\n\n";
      }
      else {
        cout << "Instancia " << n <<"\n";
        cout << "SIM\n\n";
      }
    }
    else { break; }
  }
}
