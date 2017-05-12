#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int times, v1, v2;
  cin >> times;
  while (times--) {
    cin >> v1 >> v2;
    if (v1 > v2)
      cout << ">\n";
    else if(v1 < v2)
      cout << "<\n";
    else
      cout << "=\n";
  }
}
