#include <iostream>
using namespace std;
/* http://br.spoj.com/problems/PARIDADE/ */
int main () {
  unsigned long int n = 1, cont=0;
  string f="", binario="";
  cin >> n;
    while (n != 0) {
        cont = 0;
        f="", binario="";

        while (n > 0) {
          if (n%2 == 1) {
            ++cont;
            f += "1";
          }
          else { f+="0";}

          n /= 2;
        }

        /* inverter a string */
        for (int j = f.size()-1; j > -1; j--) {
          binario += f[j];
        }

        cout << "The parity of " << binario << " is "<< cont <<" (mod 2)." << endl;
        cin >> n;
    }
}
