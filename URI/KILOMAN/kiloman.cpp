#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1250 */

int main(){
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int t, cont = 0;
		cin >> t;
		int alt[t];
		string status;

		for (int j = 0; j < t; j++) {
			cin >> alt[j];
		}
		cin >> status;

		for (int o = 0; o < t; o++) {
			// parado e altura 1
			if ((status[o] == 'S') && (alt[o] == 1)) {
				cont++;
			//	cout << "1 -  " << alt[o] << " " << status[o] << endl;
			}
			// parado e altura 2
			if ((status[o] == 'S') && (alt[o] == 2)) {
				cont++;
				//cout << "2 -  " << alt[o] << " " << status[o] << endl;
			}
			// pulando
			if ((status[o] == 'J') && (alt[o] >= 3)) {
				cont++;
				//cout << "3 -  " << alt[o] << " " << status[o] << endl;
			}
			/*
			*/
		}
		cout << cont << endl;
	}
}
