#include <ctime>
#include <iostream>
using namespace std;

int main() {
  clock_t begin = clock();

  for (long i = 0; i < 99999999; i++) {
    // --
  }

  clock_t end = clock();
  double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
  cout << elapsed_secs;
}
