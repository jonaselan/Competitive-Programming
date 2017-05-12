#include <iostream>

using namespace std;

// https://www.urionlinejudge.com.br/judge/pt/problems/view/1162

int main() {
  int n, sizeTrain;
  cin >> n;

  while (n) {
    cin >> sizeTrain;
    int wagon[sizeTrain];
    for (int i = 0; i < sizeTrain; i++) {
      cin >> wagon[i];
    }

    int position = 0, aux, x =0;
    while (position < sizeTrain) {
      //cout << sizeTrain<< " - " << position+1 << "\n";

      //while(sizeTrain != position+1){
        if (wagon[position] > wagon[position+1]) {
          cout << wagon[position] << " - " << wagon[position+1] << "\n";
          aux = wagon[position];
          wagon[position] = wagon[position+1];
          wagon[position+1] = aux;
          x++;
        }
        position++;
      //}

    }

    cout << "Optimal train swapping takes " << x <<" swaps.";
    n--;
  }
}
