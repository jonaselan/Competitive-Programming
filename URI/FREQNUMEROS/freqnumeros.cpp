#include <iostream>
#include <algorithm>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1171 */

int main() {
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++) {
      cin >> num[i];
    }
    // ordenando
    sort(num, num + n);
    int j = 0, c;

    while (j <= n){
      c = 0;
      if ((j+1) <= n) {
        while (num[j] == num[j+1]) {
          c++;
          j++;
        }
        cout << num[j] << " aparece " << c+1 << " vez(es)" << "\n";
      }
      j++;
    }

    // for (int i = 0; i < n; ++i){
    //     cout << num[i] << " ";
    // }
}
