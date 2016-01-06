#include <iostream>
using namespace std;
/* https://www.urionlinejudge.com.br/judge/pt/problems/view/1245 */

int main(){
	int n, i, qtd;

	cin >> n;
  while(n !=0) {

    qtd = 0; i =0;
    int num[n];
    char pe[n];
    bool cond;

  	while(i < n) {
  		if (i == 0){ // primeira posição
  			cin >> num[i];
  			cin >> pe[i];
  		}
  		else { // de mais..
        cin >> num[i];
  			cin >> pe[i];
        int aux = i;
        cond = true;

        while (aux != 0) {
          --aux;
          if ((cond == true) && ((pe[i] != pe[aux]) && (num[i] == num[aux]))) {
            cond = false;
            qtd++;
            // cout << num[aux] << " " << pe[aux] << " - " << num[i] << " " << pe[i] << "\n";
            num[i] = 0; pe[i] = '0';
            num[aux] = 0; pe[aux] = '0';
          }
        }
  		}
      i++;
  	}
    // ------ imprimir
    // for (int i = 0; i < n; i++) {
    //   cout << num[i] << " ";
    //   cout << pe[i] << "\n";
    // }
    // cout << "\n";
    cout << qtd << "\n";
    cin >> n;
  }
}
