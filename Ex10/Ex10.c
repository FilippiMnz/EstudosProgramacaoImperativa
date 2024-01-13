#include <math.h>
#include <stdio.h>

int Quoci(int Dividendo, int Divisor) {
  float Divisao;
  Divisao = (float)Dividendo / Divisor;
  Divisao = ceil(Divisao);
  return (int)Divisao;
}
int main() {
  int Alunos, Turma;
  printf("Insira a Quantidade de Alunos Matriculados: \n ");
  scanf("%d", &Alunos);
  printf("Insira a quantidade Maxima de Alunos por turma: \n");
  scanf("%d", &Turma);
  printf("Voce tera que comprar %d caixas", Quoci(Alunos, Turma));
  return 0;
}
