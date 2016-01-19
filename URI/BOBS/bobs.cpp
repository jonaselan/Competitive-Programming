#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1250 */

int main(){
	int n, cont;
	double m;
	cin >> n;

	for (int i = 0; i < n; i++) {
		m = 0; cont =0;
		cin >> m;
		while(m > 1){
			m /= 2; cont++;
		}
		cout << cont << " dias\n";
	}
}
