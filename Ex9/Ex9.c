#include <math.h>
#include <stdio.h>

int Quoci(int Dividendo, int Divisor) {
  float Divisao;
  Divisao = (float)Dividendo / Divisor;
  Divisao = ceil(Divisao);
  return (int)Divisao;
}
int main() {
  int Mensal, Comprimidos;
  printf("Insira a Quantidade de que deve ser usada por mês: \n ");
  scanf("%d", &Mensal);
  printf("Insira a quantidade de comprimidos por caixa: \n");
  scanf("%d", &Comprimidos);
  printf("Voce tera que comprar %d caixas", Quoci(Mensal, Comprimidos));
  return 0;
}
