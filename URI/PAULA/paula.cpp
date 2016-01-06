#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1192 */

int convertNum(char n){
  int c;
	switch (n) {
		case 48:
		 c = 0;
		break;
		case 49:
		 c = 1;
		break;
		case 50:
		 c = 2;
		break;
		case 51:
		 c = 3;
		break;
		case 52:
		 c = 4;
		break;
		case 53:
		 c = 5;
		break;
		case 54:
		 c = 6;
		break;
		case 55:
		 c = 7;
		break;
		case 56:
		 c = 8;
		break;
		case 57:
		 c = 9;
		break;
	}
	return c;
}

int main () {
    int n;
    cin >> n;
    while (n > 0) {
      string a;
      cin >> a;
      if (a[0] == a[2]) { // produto

        cout << convertNum(a[0])*convertNum(a[2]) << endl;

      }
      else if (a[1] <= 90) { // subtração

        cout << convertNum(a[2])-convertNum(a[0]) << endl;

      }
      else { // adição

        cout << convertNum(a[0])+convertNum(a[2]) << endl;

      }
      n--;
    }
}
