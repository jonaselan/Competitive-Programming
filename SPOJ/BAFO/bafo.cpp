#include <iostream>
using namespace std;
/* http://br.spoj.com/problems/PARIDADE/ */
int main () {
  int r = 1, aldo=0, beto=0;
  int vAldo, vBeto, vezes=0;
  cin >> r;
    while (r != 0) {
      aldo=0, beto=0, vAldo=0, vBeto=0;
      for (int i = 0; i < r; i++) {
         cin >> vAldo; aldo += vAldo;
         cin >> vBeto; beto += vBeto;
      }
      ++vezes;
      cout << "Teste " << vezes << "\n";
      if (beto > aldo) {
        cout << "Beto" << "\n" << endl;
      }
      else{
        cout << "Aldo" << "\n" << endl;
      }

      cin >> r;
    }
}
