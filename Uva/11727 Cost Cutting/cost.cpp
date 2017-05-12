#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  int times, s1, s2, s3;
  cin >> times;

  for (size_t i = 0; i < times; i++) {
    cin >> s1 >> s2 >> s3;
    int salaries[3] = {s1, s2, s3};
    sort(salaries, salaries + 3);
    cout << "Case "<< i+1 << ": " << salaries[1] << "\n";
  }
}
