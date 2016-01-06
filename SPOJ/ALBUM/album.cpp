#include <iostream>
using namespace std;
/* http://br.spoj.com/problems/ALBUM12/ */
int main () {
    int l, h, l1, h1, l2, h2;
    cin >> l; cin >> h;
    if ((l >= 1) && (h <= 1000)) {
      cin >> l1; cin >> h1;
      if ((l1 >= 1) && (h1 <= 1000)) {
        cin >> l2; cin >> h2;
          if ((l2 >= 1) && (h2 <= 1000)) {
            /* verifica todas as condições */

            // as duas em pé
            if (((h1+h2) <= h) && (l1 <= l) && (l2 <= l)) {
              cout << "S";
              return 0;
            }
            if (((h1+h2) <= l) && (l1 <= h) && (l2 <= h)) {
              cout << "S";
              return 0;
            }

            // as duas deitadas
            if (((l1+l2) <= h) && (h1 <= l) && (h2 <= l)) {
              cout << "S";
              return 0;
            }
            if (((l1+l2) <= l) && (h1 <= h) && (h2 <= h)) {
              cout << "S";
              return 0;
            }


            // pé e deitado (1)
            if (((h1+l2) <= h) && (l1 <= l) && (h2 <= l)) {
              cout << "S";
              return 0;
            }
            if (((h1+l2) <= l) && (l1 <= h) && (h2 <= h)) {
              cout << "S";
              return 0;
            }


            // pé e deitado (2)
            if (((h2+l1) <= h) && (l2 <= l) && (h1 <= l)) {
              cout << "S";
              return 0;
            }
            if (((h2+l1) <= l) && (l2 <= h) && (h1 <= h)) {
              cout << "S";
              return 0;
            }
            cout << "N";

          }
      }
  }
}
