#include <stdio.h>
int main()
{
  int NumberClient;
  printf("Digite Um numero Qualquer: \n");
  scanf("%d", &NumberClient);
  int NumberDecre = NumberClient - 1;
  int NumberIncre = NumberClient + 1;
  printf("O suvessor e antessesor do seu numero sao respectivamente: %d %d", NumberIncre, NumberDecre);
  return 0;
}
