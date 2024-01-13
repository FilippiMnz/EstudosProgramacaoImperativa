#include <math.h>
#include <stdio.h>
void Cambista(float Real, float TaxaCambioDolar, float TaxaCambioEuro,
              float *DolarConvertido, float *EuroConvertido) {
  *DolarConvertido = Real / TaxaCambioDolar;
  *EuroConvertido = Real / TaxaCambioEuro;
  return;
}
int main() {
  float VReais, TXDolar, TXEuro;
  float Dolar, Euro;
  printf("Insira o Valor em R$ para fazer a conversão de moedas: \n");
  scanf("%f", &VReais);
  printf("Insira a Taxa do dolar hoje: \n");
  scanf("%f", &TXDolar);
  printf("Insira a taxa do Euro hoje: \n");
  scanf("%f", &TXEuro);
  Cambista(VReais, TXDolar, TXEuro, &Dolar, &Euro);
  printf("Seu valor em dolar é de %.2f $ e em Euro é de %.2f Є", Dolar, Euro);
  return 0;
}
