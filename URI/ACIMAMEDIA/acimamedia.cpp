#include <iostream>
#include <stdio.h>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1214 */

int main() {
  int n, l;
  double media, c=0, m, nota=0;
  cin >> n;

  while(n > 0){
    cin >> m;
    l = m;
    nota = 0, c=0;
    int notas[l];

    for (int i = 0; i < l; i++) {
      cin >> notas[i];
      //cout << notas[i] << " ";
      nota += notas[i];
    }
    media = nota/m;

    for (int i = 0;i < m; i++) {
      if (notas[i] > media) {
        //cout << notas[i] << " " << media << "\n";
        c++;
      }
    }
    double mediaFinal = c/m;

    printf("%.3f", mediaFinal * 100);
    printf("%\n");
    n--;

  }
}
