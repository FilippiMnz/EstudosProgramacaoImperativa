#include <stdio.h>
void FahrenheitConvert(float Celcius1109, float *Fah) {
  *Fah = (Celcius1109 * 9 / 5) + 32;
  return;
}
void KelvinConvert(float Celcisinho, float *Kel) {
  *Kel = Celcisinho + 273, 5;
  return;
}
int main() {
  float Fahrenheit, Kelvin, Celcius;
  printf("Insira a temperatura em Celcius que deseja converter: \n");
  scanf("%f", &Celcius);
  FahrenheitConvert(Celcius, &Fahrenheit);
  KelvinConvert(Celcius, &Kelvin);
  printf("Sua temperatura em Fahrenheit é %.2f \n", Fahrenheit);
  printf("Sua temperatura em Kelvin é %.2f \n", Kelvin);
  return 0;
}
