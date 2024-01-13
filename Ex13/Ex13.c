#include <math.h>
#include <stdio.h>
void CalcArea(float raio, float Pi, float *areaCirc) {

  *areaCirc = Pi * (pow(raio, 2));
  return;
}

int main() {
  float Raio, areaCirculo;
  const float pi = 3.1415;
  printf("insira o raio do circulo: \n ");
  scanf("%f", &Raio);
  CalcArea(Raio, pi, &areaCirculo);
  printf("A area do Circulo é de %.2f", areaCirculo);
  return 0;
}
