#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1095 */

int main(){
    int j = 60, i = 1;
    while (j >= 0){
        cout << "I=" << i << " J=" << j << "\n";
        i+=3;
        j-=5;
    }
}
