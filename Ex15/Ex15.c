#include <stdio.h>
void CalcInvestimentos(double InvestimentoInit, double InvestimentoMensal,
                       int TempoInvestido, double *Montante,
                       double *Rendimento) {
  *Montante = InvestimentoInit;
  for (int i = 0; i < TempoInvestido; ++i) {
    *Montante += InvestimentoMensal;
  }

  *Rendimento = *Montante - InvestimentoInit;
  return;
}
int main() {
  double InvestimentoIncial, InvestimentoMensal, Montante, Rendimento;
  int TempoInvestimento;
  printf("Insira o Valor que deseja Investir Inicialmente: \n");
  scanf("%lf", &InvestimentoIncial);
  printf("Insira Quanto deseja investir Mensalmente: \n");
  scanf("%lf", &InvestimentoMensal);
  printf(
      "Insira a Quantidade de Tempo que deseja manter investido, Em meses: \n");
  scanf("%d", &TempoInvestimento);
  CalcInvestimentos(InvestimentoIncial, InvestimentoMensal, TempoInvestimento,
                    &Montante, &Rendimento);
  printf("Seu investimento de %.2lf R$ gerou um montante de %.2lf R$ e teve um "
         "rendimento de %.2lf R$ em %d meses",
         InvestimentoIncial, Montante, Rendimento, TempoInvestimento);
  return 0;
}
