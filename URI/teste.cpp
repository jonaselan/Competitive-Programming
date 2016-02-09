#include <iostream>
#include <string>
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1069
using namespace std;

int main(){
  int num, aux, aux2, cont;
  string mina;
  cin >> num;

  while (num) {
    aux = 0, aux2 =0, cont = 0;
    cin >> mina;

    while (aux < mina.size()) {
      if (mina[aux] == '<') {
        aux2 = aux+1;

        while ((mina[aux2] != '>') && (aux2 < mina.size())){
          aux2++;
        }

        if (mina[aux2] == '>'){
          cont++;
          //cout << mina << " - ";
          mina[aux] = '.';
          mina[aux2] = '.';
          //cout << mina << " -- " << cont << "\n";
        }

      }
      aux++;
    }

    cout << cont << "\n";
    num--;

  }
}
