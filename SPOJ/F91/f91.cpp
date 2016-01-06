#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
/* http://br.spoj.com/problems/F91/ */
int f91(int n){
  if (!(n > 100)) {
    n = f91(f91(n + 11));
    return n;
  }
  else{
    n -= 10;
  return n;
  }
}

int main() {
  int num = 1, cont=0;
  while (num != 0) {
    cin >> num;
    ++cont;
    if ((num != 0) && (num <= 1000000) && (cont <= 250000)) {
        printf("f91(%d) = %d\n", num, f91(num));
    }
  }
  return 0;
}
