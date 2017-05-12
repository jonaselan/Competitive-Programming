#include <time.h>
#include <stdio.h>
#include <math.h>

int primo(long int n){
  long int i, qtdDivisores = 0;
  if (n<0) n = -n;
  for (i =2 ; i < n ; ++i)
    if (n%i==0)
      qtdDivisores++;
  return qtdDivisores==0;
}

void lerDados(long int n, long int nums[]){
  for (int i = 0 ; i < n ; ++i)
    scanf("%ld",nums+i);
}

void calculaPrimos(long int n, long int nums[], long int p[]){
  double x = sqrt(n);
  for (int i = 0 ; i < sqrt(n); ++i)

      p[i] = primo(nums[i]);
    
  }

void mostraEstatisticas(long int n, long int primos[], clock_t inicio, clock_t fim){
  long int qtdPrimos = 0;
  for (long int i = 0 ; i < n ; ++i) {
    if (primos[i]==1)
      qtdPrimos++;
  }
  printf("Quantiade de números : %ld\n",n);
  printf("Quantidade de primos : %ld\n",qtdPrimos);
  printf("Clock inicial        : %ld\n",inicio);
  printf("Clock final          : %ld\n",fim);
  printf("Total de clock ticks : %ld\n",(fim-inicio));
  printf("Tempo em segundos    : %g\n",((double) (fim - inicio)) / CLOCKS_PER_SEC);
}

int main(int argc, char **argv){

  clock_t inicio, fim;
  long int n;
  scanf("%ld",&n);

  long int nums[n],primos[n];
  lerDados(n, nums);

  inicio = clock();
  calculaPrimos(n, nums, primos);
  fim = clock();

  mostraEstatisticas(n,primos,inicio,fim);

}
