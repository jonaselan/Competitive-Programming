#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1041 */

int main(){
	double x, y;
	cin >> x; cin >> y;

	if ((x == 0) && (y==0)) {
		cout << "Origem" << "\n";
	}
	else if (x == 0){
		cout << "Eixo Y" << "\n";
	}
	else if(y == 0){
		cout << "Eixo X" << "\n";
	}
	else {
		if (x > 0) {
			if (y > 0) {
				cout << "Q1" << "\n";
			}
			else {
				cout << "Q4" << "\n";
			}
		}
		else if (x < 0){
			if (y > 0){
				cout << "Q2" << "\n";
			}
			else{
				cout << "Q3" << "\n";
			}
		}
	}
}
