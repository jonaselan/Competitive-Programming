#include <iostream>
using namespace std;
int n, m, x, y;

void NO(){
  if ((n > x) && (m < y)) {
    cout << "NO\n";
  }
}

void NE(){
  if ((n < x) && (m < y)) {
    cout << "NE\n";
  }
}

void SE(){
  if ((n < x) && (m > y)) {
    cout << "SE\n";
  }
}

void SO(){
  if ((n > x) && (m > y)) {
    cout << "SO\n";
  }
}

int main () {
    int k =1;
    cin >> k;

    while (k != 0) {
     n=0, m=0, x=0, y=0;
     cin >> n; cin >> m;
       for(int i = 0; i < k; i++){
          cin >> x; cin >> y;
             if ((n == x) || (y == m)) {
               cout << "divisa\n";
             }
             else {
               NO();
               NE();
               SE();
               SO();
               /*cout << "n = " << n << " m = " << m;
               cout << "\nx = " << x << " y = " << y;*/
             }
       }
       cin >> k;
    }
}
