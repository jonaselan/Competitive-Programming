#include <iostream>
using namespace std;

/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1323 */

int main(){
	int num, final=0;
	cin >> num;
	if (!num){
		return 0;
	}

	for (int i = 1; i < num+1; ++i) {
		//cout << i*i << "\n";
		final += i*i;
	}
	cout << final << "\n";

	main();
}