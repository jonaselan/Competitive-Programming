#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1097 */

int main(){
	int i = 1, j = 7, aux;
	while (i <= 9){
		aux = 3;
		while (aux > 0) {
			cout << "I=" << i << " J=" << j << "\n";
			j--;
			aux--;
		}
		j+=5;
		i+=2;
	}
}
