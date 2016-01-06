#include <iostream>
#include <string>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1024 */

int main() {
  int n;
  bool verifc = false;
  string p;
  cin >> n;

  while(n > -1) {
    getline (cin, p);
    if (verifc) {
        // 1º processamento
      for (int i = 0;i < p.size(); i++) {
        if (((p[i] >= 'A') && (p[i] <= 'Z')) || ((p[i] >= 'a') && (p[i] <= 'z'))) {
          p[i] = p[i]+3;
        }
      }

        // 2º processamento
      int size = p.size(), first = 0;
      char aux;
      if (size%2==0) { // par
        size--;
        while (size > first){
          aux = p[first];
          p[first] = p[size];
          p[size] = aux;
          first ++;
          size --;
        }
      }
      else { // impar
        size--;
        while (size != first){
          aux = p[first];
          p[first] = p[size];
          p[size] = aux;
          first ++;
          size --;
        }
      }

        // 3º processamento
      for (int i = p.size()/2;i < p.size(); i++) {
        p[i] = p[i]-1;
      }
      cout << p << endl;
    }
      verifc = true;
      n--;
  }
}
