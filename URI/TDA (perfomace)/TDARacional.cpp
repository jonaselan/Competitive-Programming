#include <iostream>
#include <string>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1022 */

/*
int converter (char num){
  switch (num) {
    case 48:
      return 0;
    break;
    case 49:
      return 1;
    break;
    case 50:
      return 2;
    break;
    case 51:
      return 3;
    break;
    case 52:
      return 4;
    break;
    case 53:
      return 5;
    break;
    case 54:
      return 6;
    break;
    case 55:
      return 7;
    break;
    case 56:
      return 8;
    break;
    case 57:
      return 9;
    break;
  }
}
*/
void troca(int &a, int &b) {
   int c;
   c = a;
   a = b;
   b = c;
}

int mdc(int x, int y){
   do {
      x = x % y;
      //cout << "x = " << x << " y = " << y << endl;
      troca(x,y);
      //cout << "x = " << x << " y = " << y << endl;
   } while ( y != 0 );
   return x;
}

int main() {
  int n;
  bool primeiraV = false;
  string expression;
  cin >> n;

  while(n > -1) {
    getline (cin, expression);
    if (primeiraV) {
      //int N1=converter(expression[0]), D1=converter(expression[4]);
      //int N2=converter(expression[8]), D2=converter(expression[12]);
      int N1=expression[0]-48, D1=expression[4]-48;
      int N2=expression[8]-48, D2=expression[12]-48;
      int NFinal=0, DFinal=0;

      if (expression[6] == '+') { // adição
        NFinal = (N1*D2 + N2*D1);
        DFinal = (D1*D2);
      }
      else if (expression[6] == '-') { // subtração
        NFinal = (N1*D2 - N2*D1);
        DFinal = (D1*D2);
      }
      else if (expression[6] == '*') { // multiplicação
        NFinal = (N1*N2);
        DFinal = (D1*D2);
      }
      else if (expression[6] == '/') { // divisão
        NFinal = (N1*D2);
        DFinal = (N2*D1);
      }

      int divisor = mdc(NFinal, DFinal);
      if (divisor < 0) divisor *= -1;

      cout << NFinal << "/" << DFinal << " = " << NFinal/divisor << "/" << DFinal/divisor << "\n";
    }
      primeiraV = true;
      n--;
  }
}
