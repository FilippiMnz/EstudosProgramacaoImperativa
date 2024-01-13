#include <math.h>
#include <stdio.h>
void CalcImc(float PesoK, float AlturaM, float *ImcClient) {
  *ImcClient = PesoK / (pow(AlturaM, 2));
  return;
}
int main() {
  float Peso, Altura, ImcC;
  printf("Insira seu Peso em KG: \n");
  scanf("%f", &Peso);
  printf("Insira sua Altura em Metros: \n ");
  scanf("%f", &Altura);
  CalcImc(Peso, Altura, &ImcC);
  printf("Seu imc é de %f", ImcC);
  return 0;
}
