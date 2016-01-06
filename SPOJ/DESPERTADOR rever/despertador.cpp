#include <iostream>
using namespace std;

/* http://br.spoj.com/problems/ALADES/ */

int main () {
  int h1, m1, m2, h2;
  int qtdHoras, qtdMins, minTotal;
  bool aux;
  cin >> h1; cin >> m1; cin >> h2; cin >> m2;

    while ((h1 != 0) || (m1 != 0) || (h2 != 0) || (m2 != 0)) {
      qtdHoras=0;
      qtdMins=0;
      aux = true;
      // cout << h1 << " - "<< h2 << endl;

        /* diferença entre horas */
            if ((h1 == 23) && (h2 == 0)) {
              aux = false;
            }

      if (aux) {
        if (h1 > h2) { // menos comum
          while (h1 != h2) {
            ++qtdHoras;
            ++h1;
            if (h1 == 24) {
              h1=0;
            }
          }
          if (qtdHoras!=0){
            qtdHoras = 1440 - (qtdHoras *= 60); // qtd minuto
          }
        }
      }
        if (h2 > h1) { // mais comum
          while (h1 != h2) {
            ++qtdHoras;
            ++h1;
          }
          qtdHoras *= 60; // qtd minuto
        }

        /* diferença entre minutos */
        if ((m1 > m2) && (h1==h2)) {
          while (m1!=m2){
            --m1;
            ++qtdMins;
          }
          minTotal =  1440 - qtdMins;
        }

        else if (m1 > m2) {
          while (m1!=m2) {
            ++m1;
            ++qtdMins;

            if (m1==60) {
              m1=0;
            }
          }
          minTotal = qtdHoras+qtdMins;
        }

        else if (m2 > m1 ) {
          while (m1!=m2){
            --m2;
            ++qtdMins;
          }
            minTotal = qtdHoras+qtdMins;
        }
        else { // minutos iguais
          minTotal = qtdHoras;
        }
        cout << minTotal << endl;
      /* diferença entre minutos
        if (m1 > m2) {
          while (m1!=m2) {
            ++qtdMins;
            ++m1;
            if (m1 == 60) {
              m1=0;
            }
          }
        }
        else if (m1 < m2) {
          while (m1!=m2) {
            ++qtdMins;
            ++m2;
            if (m2 == 60) {
              m2=0;
            }
          }
        }
      */
      cin >> h1; cin >> m1; cin >> h2; cin >> m2;
    }
}
