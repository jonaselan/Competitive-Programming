#include <iostream>
#include <string>
using namespace std;
/* http://br.spoj.com/problems/ONZE/ */
int main () {
  int c = 0, par = 0, impar=0, modpar, modimpar;
  bool aux = false;
  string numero;
  while (numero != "0") {
      cin >> numero;
    if (numero[0] != 45) {
      if (numero != "0") {
        for (int i = 0; i < numero.length(); i++){
          switch (numero[i]) {
            case 48:
             c = 0;
            break;
            case 49:
            aux = true;
             c = 1;
            break;
            case 50:
            aux = true;
             c = 2;
            break;
            case 51:
            aux = true;
             c = 3;
            break;
            case 52:
            aux = true;
             c = 4;
            break;
            case 53:
            aux = true;
             c = 5;
            break;
            case 54:
            aux = true;
             c = 6;
            break;
            case 55:
             c = 7;
             aux = true;
            break;
            case 56:
            aux = true;
             c = 8;
            break;
            case 57:
            aux = true;
             c = 9;
            break;
          }

          if (aux){
            if (i%2==0) {
              par += c;
            }
            else {
              impar += c;
            }
          }
        }
          modpar = par % 11;
          modimpar = impar % 11;
          if (modpar == modimpar){
            if (par == 0 && impar == 0){
                cout << numero << " is not a multiple of 11." << endl;
            }
            else{
                cout << numero << " is a multiple of 11." << endl;
            }
          }else{
            cout << numero << " is not a multiple of 11." << endl;
          }
          par = 0;
          impar = 0;
          aux = false;
      }
    }
    /* else { cout << "erro \n"; } */
  }
  return 0;
}
