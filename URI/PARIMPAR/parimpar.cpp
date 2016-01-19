#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1074 */

int main(){
	int n, m;
	cin >> n;
	while(n > 0){
		cin >> m;
		if (m==0)
			cout << "NULL" << "\n";
		else if(m%2==0)
			if (m > 0)
				cout << "EVEN POSITIVE" << "\n";
			else
				cout << "EVEN NEGATIVE" << "\n";
		else
			if (m > 0)
				cout << "ODD POSITIVE" << "\n";
			else
				cout << "ODD NEGATIVE" << "\n";

		n--;
	}
}
