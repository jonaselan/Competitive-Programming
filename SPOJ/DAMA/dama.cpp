#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
/* http://br.spoj.com/problems/DAMA/ */
int X1 = 1, Y1 = 1, X2 = 1, Y2 = 1, cont = 0;

void superiorDireito(){
  while ((X1 != X2) && (Y1 != Y2)) {
    --X1;
    ++Y1;
  }
  if ((X1 != X2) || (Y1 != Y2)) {
    ++cont;
  }
}

void superiorEsquerdo(){
  while ((X1 != X2) && (Y1 != Y2)) {
    --X1;
    --Y1;
  }
  if ((X1 != X2) || (Y1 != Y2)) {
    ++cont;
  }
}

void inferiorDireito(){
  while ((X1 != X2) && (Y1 != Y2)) {
    ++X1;
    ++Y1;
  }
  if ((X1 != X2) || (Y1 != Y2)) {
    ++cont;
  }
}

void inferiorEsquerdo(){
  while ((X1 != X2) && (Y1 != Y2)) {
    ++X1;
    --Y1;
  }
  if ((X1 != X2) || (Y1 != Y2)) {
    ++cont;
  }
}

int main() {
  while ((X1 != 0) && (Y1 != 0) && (X2 != 0) && (Y2 != 0)) {
    /* lendo  valores */
    cin >> X1; cin >> Y1; cin >> X2; cin >> Y2;

      if ((X1 != 0) && (Y2 != 0) && (X2 != 0) && (Y1 != 0)) {
        if (((X1 >= 1) && (X1 <= 8)) && ((Y1 >= 1) && (Y1 <= 8)) &&
            ((X2 >= 1) && (X2 <= 8)) && ((Y2 >= 1) && (Y2 <= 8))) {
              cont = 0;
          /* enquanto a dama nao chegar na posição desejada */
          while ((X1 != X2) || (Y1 != Y2)) {
            /* mesma linha, modifica as colunas */
            if (X1 == X2) {
              ++cont;
              break;
            }
            /* mesma coluna, modifica as linhas */
            if (Y1 == Y2) {
              ++cont;
              break;
            }
            /* superior direito */
            if ((X1 > X2) && (Y1 < Y2)) {
              ++cont;
              superiorDireito();
              break;
            }
            /* superior esquerdo */
            if ((X1 > X2) && (Y1 > Y2)) {
              ++cont;
              superiorEsquerdo();
              break;
            }
            /* inferior direito */
            if ((X1 < X2) && (Y1 < Y2)) {
              ++cont;
              inferiorDireito();
              break;
            }
            /* inferior esquerdo */
            if ((X1 < X2) && (Y1 > Y2)) {
              ++cont;
              inferiorEsquerdo();
              break;
            }
          }
          printf("%d\n", cont);
          }
      }
  }
  return 0;
}
