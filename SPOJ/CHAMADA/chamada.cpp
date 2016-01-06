#include <iostream>
#include <algorithm>
#include <vector>
/* http://br.spoj.com/problems/CHAMADA1/ */
using namespace std;

int main(){
  int escolhido;
  int qtd=0;

  cin >> qtd;
  cin >> escolhido;

  vector<string> a;
  string s;

  for (int i = 0; i < qtd; i++) {
    cin >> s;
    a.push_back(s);
  }
  sort(a.begin(), a.end());

  cout << a[escolhido-1] << endl;

}
