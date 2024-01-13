#include <math.h>
#include <stdio.h>
int Potencia(int NumeroPot) {
  int potencia = (pow(NumeroPot, 3));
  return (int)potencia;
}
int main() {
  int Pot, ClientNumber;
  printf("Insira um Numero a seguir para receber o Cubo do mesmo: \n");
  scanf("%d", &ClientNumber);
  printf("O cubo do seu numero é %d ", Potencia(ClientNumber));
  return 0;
}
