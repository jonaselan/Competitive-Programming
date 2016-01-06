#include <stdio.h>
#include <iostream>
int main()
{
  double m;
  int n;
	//m = 1;
  std::cin >> m;
  //n = 3;
  std::cin >> n;

  double f = m/n;
  //printf("%f", f);
  printf("%.3f", f * 100);
  printf("%\n");
}
