#include <iostream>

using namespace std;
/* http://br.spoj.com/problems/CARTAS14/ */

int main () {
  int c, d, num;
  int C=0, D=0;
  cin >> num;
  if ((num >=1) && (num <= 13)) {
    c = num; d = num;
    for (int i = 1; i < 5; i++) {
      cin >> num;

      if ((num < 1) || (num > 13)) {
        return 0;
      }

        if (num > c) {
          // cout << num << "\n";
          c = num;
          C++;

        }
        else if(num < d){
          d = num;
          D++;
        }
    }
    //cout << C << "\n";
    //cout << D << "\n";
    if (D == 4) {
      cout << "D";
    }
    else if (C == 4){
      cout << "C";
    }
    else
      cout << "N";
  }
    else {
      return 0;
    }
}
