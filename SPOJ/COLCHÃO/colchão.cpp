#include <iostream>
using namespace std;
/* http://br.spoj.com/problems/COLCH12/ */

int main() {
    int h, l, a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    cin >> h;
    cin >> l;

    if ((c <= h) && (b <= l)) {
      cout << "S";
      return 0;
    }
    else if ((b <= h) && (c <= l)) {
      cout << "S";
      return 0;
    }
    else if ((a <= l) && (c <= h)) {
      cout << "S";
      return 0;
    }
    else if ((c <= l) && (a <= h)) {
      cout << "S";
      return 0;
    }
    else if ((a <= l) && (b <= h)) {
      cout << "S";
      return 0;
    }
    else if ((b <= l) && (a <= h)) {
      cout << "S";
      return 0;
    }
    else cout << "N";

}
