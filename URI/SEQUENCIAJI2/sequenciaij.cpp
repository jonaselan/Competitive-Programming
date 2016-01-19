#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1096 */

int main(){
    int i = 1, j, aux;
    while (i <= 9){
        aux = 3; j = 7;
        while (aux > 0) {
            cout << "I=" << i << " J=" << j << "\n";
            j--;
            aux--;
        }
        i+=2;
    }
}
